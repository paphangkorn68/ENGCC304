#include <stdio.h>

void swapNumbers( int *a , int *b ) ;                       //ประกาศใช้ฟังก์ชัน

int main() {                                                

    int num1 = 0, num2 = 0 ;                                //ประกาศตัวแปล

    printf( "num1 :" ) ;                                    //แสดงรับค่า num1 num2
    scanf( "%d" , &num1 ) ;
    printf( "num2 :" ) ;
    scanf( "%d" , &num2 ) ;

    int *ptr1 = &num1 ;                                     //สร้างผี ptr1 ptr2 มาสิง num1 num2 ตามลำดับ
    int *ptr2 = &num2 ;
    printf("before %d , %d \n" , num1 , num2 ) ;            //แสดง num1 num2 ก่อนสลับ
    swapNumbers( ptr1 , ptr2 ) ;                            //ฟังก์ชันสลับ num1 num2
    printf("after %d , %d \n" , num1 , num2 ) ;             //แสดง num1 num2 ที่สลับแล้ว
    return 0 ;
}                                                           //จบ main

void swapNumbers( int *a , int *b ) {                       //ฟังก์ชันสลับ num1 num2
    *a = *a + *b ;                                          //ให้ num1 เก็บค่า num1 + num2 
    *b = *a - *b ;                                          //ให้ num2 เก็บค่า num1 - num2
    *a = *a - *b ;                                          //ให้ num1 เก็บค่า num1 - num2
}                                                           //จบ ฟังก์ชัน swapNumbers