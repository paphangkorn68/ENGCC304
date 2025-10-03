#include <stdio.h>

int main() {                                    //เริ่ม main
    int t , s ;                                 //ประกาศตัวแปล

    printf( "enter day " ) ;                    //แสดง enter day
    scanf( "%d" , &t ) ;                        //รับค่าวันใส่ t
    s = t * 24 * 60 * 60 ;                      //คำนวนหา วินาที
    printf( " day %d = %d seconds" , t , s ) ;  //แสดงวันและวินาที
    return 0 ;
}                                               //จบ