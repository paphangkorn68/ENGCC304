#include <stdio.h>
#include <string.h>

int main() {                                        //เริ่ม main

    int sc ;                                        //ประกาศตัวแปล
    char g[4] ;

    printf( "enter score\n" ) ;                     //แสดง enter score
    while ( scanf("%d", &sc) != 1 ) {               // while ตรวจสอบว่าเป็นตัวเลขหรือไม่
        printf("number only: ") ;                   //ไม่ใช้ให้แสดง number only
        while(getchar() != '\n') ;                         
    }                                               //จบ while

    if( sc > 80 ) {                                 //if ตรวจสอบเกลด
        strcpy( g , "A" ) ;
        strcat( g , "!" ) ;
    }else if (sc >= 75) {
        strcpy( g , "B" ) ;
        strcat( g , "+" ) ;
        strcat( g , "!" ) ;
    }else if (sc >= 70) {
        strcpy( g , "B" ) ;
        strcat( g , "!" ) ;
    }else if (sc >= 65) {
        strcpy( g , "C" ) ;
        strcat( g , "+" ) ;
        strcat( g , "!" ) ;
    }else if (sc >= 60) {
        strcpy( g , "C" ) ;
        strcat( g , "!" ) ;
    }else if (sc >= 55) {
        strcpy( g , "D" ) ;
        strcat( g , "+" ) ;
        strcat( g , "!" ) ;
    }else if (sc >= 50) {
        strcpy( g , "D" ) ;
        strcat( g , "!" ) ;
    }else {
        strcpy( g , "F" ) ;
        strcat( g , "!" ) ;
    }                                               //จบ if
    printf( "score = %d \n" , sc ) ;                //แสดง คะแนน
    printf( "grade = %s \n" , g ) ;                 //แสดง เกลด
    
    
    return 0 ;
}                                                   //จบ main