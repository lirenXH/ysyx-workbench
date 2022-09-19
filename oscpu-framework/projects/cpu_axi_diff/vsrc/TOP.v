 module TOP

   wire         clock;
   wire         reset;
   wire  [63:0] io_logCtrl_log_begin;
   wire  [63:0] io_logCtrl_log_end;
   wire  [63:0] io_logCtrl_log_level;
   wire         io_perfInfo_clean;
   wire         io_perfInfo_dump;
   wire  [7:0]  io_uart_in_ch;
$fsdbDumpMDA();
 SimTop SimTop(

   .clock                (clock                ),
   .reset                (reset                ),
   .io_logCtrl_log_begin (io_logCtrl_log_begin ),
   .io_logCtrl_log_end   (io_logCtrl_log_end   ),
   .io_logCtrl_log_level (io_logCtrl_log_level ),
   .io_perfInfo_clean    (io_perfInfo_clean    ),
   .io_perfInfo_dump     (io_perfInfo_dump     ),
   .io_uart_out_valid    (                     ),
   .io_uart_out_ch       (                     ),
   .io_uart_in_valid     (                     ),
   .io_uart_in_ch        (io_uart_in_valid     )
 );

 endmodule
