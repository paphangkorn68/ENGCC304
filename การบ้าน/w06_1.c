#include <stdio.h>
#include <string.h>

int main() {                                                                                                            //เริ่ม main

    int num ;                                                                                                           //กำหนดตัวแปล
    char *one[11] = { "" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" } ;
    char *ten[11] = { "Ten" , "Eleven" , "Twelve" , "Thirteen" , "Fourteen" , "Fifteen" , "Sixteen" , "Seventeen" , "Eighteen" , "Nineteen" } ;
    char *teen[11] = { "" , "" , "Twenty" , "Thirty" , "Forty" , "Fifty" , "Sixty" , "Seventy" , "Eighty" , "Ninety" } ;


    printf( "enter number : " ) ;                                                                                       //แสดง enter number
    while ( scanf( "%d" , &num ) != 1 ) {                                                                               //while ตรวจว่าเป็นตัวเลขหรืไม่
        printf( "number only: " ) ;
        while( getchar() != '\n' ) ;                         
    }                                                                                                                   //จบ while

    if( num == 0 ) {                                                                                                    //if 1 ถ้า num = 0 ให้แสดง zero
        printf( "zero\n" ) ;
    }else if ( num >= 100 ) {                                                                                           //ถ้า num >= 100 ให้แสดง oneในตำแน่งที่หาได้และตามด้วย Hundred   
        printf( "%s Hundred " , one[ num / 100 ] ) ;
        num = num % 100 ;                                                                                               //ลด num ลง
    }                                                                                                                   //จบ if 1

    if ( num >= 20 ) {                                                                                                  //if 2 ถ้า num >= 20 ให้แสดง teen ในตำแน่งที่หาได้
        printf( "%s " , teen[ num / 10 ] ) ;
        num = num % 10 ;
    }else if ( num >= 10 ) {                                                                                            //ถ้า num >= 10 ให้แสดง ten ในตำแน่งที่หาได้
        printf( "%s " , ten[ num - 10 ] ) ;
    }else if ( num > 0 ) {
        printf( "%s " , one[ num ] ) ;                                                                                  //ถ้า num > 0 ให้แสดง one ในตำแน่งที่หาได้
    }
    
    return 0 ;
}                                                                                                                       // จบ main

