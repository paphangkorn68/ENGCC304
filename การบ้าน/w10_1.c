#include <stdio.h>
#include <string.h>

int main() {

    int n , i , d ;                                 //ประกาศตัวแปล
    char name[10] ;                                 //กำหนดค่า name
    char np[10] ;                                   //กำหนดค่า np 

    printf( "enter name \n" ) ;                     //แสดง enter name
    scanf( "%s" , &name ) ;                         //รับค่า name
    n = strlen( name ) ;                            //ตรวจจำนวนตัวอักสศในname

    for( i = 0 ; i < n ; i++ ) {                    //วนไปเลือยๆเมือ i < n 
        np[i] = name[n-i-1] ;                       //กลับตำแหน่งตัวอักศร

    }                                               //จบfor loob

    d = strcmp( name , np ) ;                       //นำชื่อมาลบกัน แล้วเก็บค่าไว้ใน d

    if( d == 0 ) {                                  //ถ้า d == 0 จริง ให้แสดง pass 
        printf( "pass" ) ;
    }else {                                         //ถ้าไม่จิง ให้แสดง not pass
       printf( "not pass" ) ; 
    }                                               //จบ if

    return 0 ;
}                                                   //จบ main