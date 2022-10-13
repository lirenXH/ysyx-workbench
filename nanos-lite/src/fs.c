#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;
size_t seek_offset = 0;
enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_KB ,FD_VGA ,FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_KB]     = {"/dev/events", 0, 0, events_read, invalid_write},
  [FD_VGA]    = {"/dev/fb", 0, 0, dispinfo_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb

}


int fs_open(const char *pathname, int flags, int mode){   //返回值为一文件描述符 方便后续read write fd使用
  int i;
  for(i=0;i<31;i++){
    if(strcmp(file_table[i].name,(char *)pathname)==0){
      Log("load file %s  fd is %d",pathname,i);
      return i;
    }
  }
  assert(!i);
  return 0;
}

size_t fs_read1(int fd, void *buf, size_t len){    //专门给loader用
  //printf("file_table[%d].disk_offset + seek_offset = %d\n",fd,file_table[fd].disk_offset + seek_offset);
  ramdisk_read(buf,file_table[fd].disk_offset + seek_offset,len);
  return len;
}

size_t fs_read(int fd, void *buf, size_t len){    //返回值应该是读入数据大小
  printf("file_table[%d].disk_offset  = %d\n",fd,file_table[fd].disk_offset);
  if(file_table[fd].read == NULL){
    ramdisk_read(buf,file_table[fd].disk_offset + seek_offset ,len);
    seek_offset = seek_offset + len;
    return len;
  }else{
    len = file_table[fd].read(buf,0,len);
    return len;//返回写的字节数
  }
}

size_t fs_write(int fd,const void* buf,size_t len){
  //printf("fs_write fd : %d  len : %d\n",fd,len);
  if(file_table[fd].write == NULL){
    ramdisk_write(buf,file_table[fd].disk_offset + seek_offset,len);
    seek_offset = seek_offset + len;
    return len;

  //}else if(file_table[fd].write == serial_write){
  }else{                                  //包括键盘，串口 均无偏移量
    file_table[fd].write(buf,0,len);
    return len;//返回写的字节数
  }
  return -1;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  //printf("fs_lseek fd = %d offset = %d whence = %d\n",fd,offset,whence);1
  //printf("seek_offset = %d\n",seek_offset);
  if(whence == 0)
    seek_offset = offset;    //从头开始
  else if(whence == 1)
    seek_offset = offset + file_table[fd].disk_offset;            //从当前位置开始
  else if(whence == 2)
    seek_offset = file_table[fd].size + offset;           //从尾部开始
  else
    assert(0);
  return seek_offset;  //返回当前偏移量位置
}

size_t fs_lseek1(int fd, size_t offset, int whence){    //专门给loader用
  //printf("fs_lseek fd = %d offset = %d whence = %d\n",fd,offset,whence);1
  //printf("seek_offset = %d\n",seek_offset);
  if(whence == 0)
    seek_offset = offset - file_table[fd].disk_offset;    //从头开始
  else if(whence == 1)
    seek_offset = offset;                                 //从当前位置开始
  else if(whence == 2)
    seek_offset = file_table[fd].size + offset;           //从尾部开始
  else
    assert(0);
  return seek_offset;  //返回当前偏移量位置
}

int fs_close(int fd){
  return 0;
}
