#include <stdio.h>

int main() {                                    //เริ่ม main

    int  w = 0 ;                                //ประกาศตัวแปล
    int  h = 0 ;
    float  a = 0 ;

    printf( "Enter Width : " ) ;                //แสดง Enter Width
    scanf( "%d", &w ) ;                         //รับค่าใส่ w
    printf( "Enter high : " ) ;                 //แสดง Enter high
    scanf( "%d", &h ) ;                         //รับค่าใส่ h
    a = 0.5 * w * h ;                           //คำนวนพื้นที่3เหลียม
    printf( "- - - - - -\n" ) ;                 
    printf( "area : %.2f \n", a ) ;             //แสดง area

    return 0 ;
}                                               //จบ