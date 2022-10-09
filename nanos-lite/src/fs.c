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

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

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
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}


int fs_open(const char *pathname, int flags, int mode){   //返回值为一文件描述符 方便后续read write fd使用
  int i;
  printf("1");
  for(i=0;i<22;i++){
    if(file_table[i].name == pathname){
      Log("load file %s",pathname);
      return i;
    }
  }
  assert(1);
  return 0;
}

size_t fs_read(int fd, void *buf, size_t len){    //返回值应该是读入数据大小
  ramdisk_read(buf,file_table[fd].disk_offset,len);
  return 0;
}

size_t fs_write(int fd, const void *buf, size_t len){
  ramdisk_write(buf,file_table[fd].disk_offset,len);
  return 0;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  return 0;
}

int fs_close(int fd){
  return 0;
}

size_t write(int fd,const void* buf,size_t len){
  int i;
  if((fd == 1)||(fd == 2)){
    for(i=0;i<len;i++){
      putch( ((char*)buf)[i] );//输出i个字符
    }
    return len;//返回写的字节数
  }
  return -1;
}
