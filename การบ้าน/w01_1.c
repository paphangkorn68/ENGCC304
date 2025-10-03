#include <stdio.h>

int main() {                                            //เริ่ม main

    int num1 , num2 , num3 , sum ;                      //ประกาศตัวแปล

    printf( "input number \n" ) ;                       //แสดง input number
    scanf( "%d %d %d" , &num1 , &num2 , &num3 ) ;       //รับค่าใส่ในตัวแปล
    sum = num1 + num2 + num3 ;                          //นำค่าต่างๆมาบวกรวมกัน
    printf( "out put = %d" , sum ) ;                    //แสดงผลรวม

    return 0 ;
}                                                       //จบ main