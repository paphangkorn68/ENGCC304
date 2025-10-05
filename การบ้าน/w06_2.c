#include <stdio.h>
#include <string.h>

int main() {                                                //เริ่ม main

    int n , i = 0 ;                                         //ประกาศตัวแปล

    printf( "enter number : " ) ;                           //แสดง enter number
    while ( scanf( "%d" , &n ) != 1 || n < 0 ) {            // while ตรวจสอบว่าเป็นตัวเลข หรือ >=0 หรือไม่ 
        printf( "number only: " ) ;                         //ไม่ใช้ให้แสดง number only
        while( getchar() != '\n' ) ;                         
    }                                                       //จบ while

    if( n % 2 == 0 ) {                                      //if ตรวจสอบว่าเป็น แลขคู้หรือไม่ ถ้าใช่ให้แสดงค่า i ที่เป็นเลข คู้
        while ( i <= n ) {
            printf( "%d " , n ) ;
            n -= 2 ;
        }
        
    }else {                                                 //if ตรวจสอบว่าเป็น แลขคี้หรือไม่ ถ้าใช่ให้แสดงค่า i ที่เป็นเลข คี้
        i = 1 ;
        while ( i <= n ) {
            printf( "%d " , i ) ;
            i += 2 ;
        }
    }                                                       //จบ if
    

    return 0 ;

}                                                           //จบ main