#include <stdio.h>

int main() {

    int sec, munny, munny1, munny2, i, pj, y ;                  //ประกาศตัวแปล รับค่า จำนวนเต็ม
    float x, bonus;                                             //ประกาศตัวแปล รับค่า จำนวนทศนิยม

    do {                                                        // Do while 1 แสดงการรับค่าของตำแหน่งผู้ใช้งาน เพื่อตรวจสอบว่าตำแหน่งไหนมีเงินเท่าไหล่
        printf( "What is your position? \n" ) ;
        printf( "Junior Programmer    = 1 \n" ) ;
        printf( "Mid-Level Programmer = 2\n" ) ;
        printf( "Senior Programmer    = 3 \n" ) ;
        if( scanf( "%d", &sec ) != 1 ) {                        //ตรวจสอบว่าเป็นตัวเลขหรือไม่ ถ้าไม่ใช่ ให้ทำการแสดง number only และล้างบัฟเฟอ
            printf( "number only \n" ) ;
            while ( getchar() != '\n' ) ;
        }else {                                                 
            if( sec == 3 ) {
                munny = 50000 ;
                break ;
            }else if ( sec == 2 ) {
                munny = 35000 ;
                break ;
            }else if ( sec == 1 ) {
                munny = 20000 ;
                break ;
            }
        }                                                       //จบ if
    }while( 1 ) ;                                               //จบ Do while 1 

    i = munny ;                                                 //กำหนดให้ i = munny เพื่อใช้ในตอนบอก Basic salary

    do {                                                        // Do while 2 ทำหน้าที่รับจำนวนปีที่ทำงาน
        printf( "How many years have you worked? \n" ) ;
        if( scanf( "%d", &y ) != 1 ) {                          //ตรวจสอบว่าเป็นตัวเลขหรือไม่ ถ้าไม่ใช่ ให้ทำการแสดง number only และล้างบัฟเฟอ
            printf( "number only \n" ) ;
            while ( getchar() != '\n' ) ;
        }else {
            break ;
        }                                                       //จบ if
    }while( 1 ) ;                                               //จบ Do while 2

    do {                                                        // Do while 3 ทำหน้าที่รับจำนวนโปรเจกที่ทำเสร็จไปในปีที่ทำงาน
        printf( "How many projects have you completed? \n" ) ;  
        if( scanf( "%d", &pj ) != 1 ) {                         //ตรวจสอบว่าเป็นตัวเลขหรือไม่ ถ้าไม่ใช่ ให้ทำการแสดง number only และล้างบัฟเฟอ
            printf( "number only \n" ) ;
            while ( getchar() != '\n' ) ;
        }else {
            break ;
        }                                                       //จบ if
    }while( 1 ) ;                                               //จบ Do while 3

    if( pj > 5 ) {                                              //ตรวจสอบว่ามีการทำโปรเจกมากกว่า 5 หรือไม่เพื่อเพื่ม Special bonus
        bonus = 0.05 ;
    }                                                           //จบ if

    if( y > 5) {                                                //รวจสอบว่าทำงานมากี่ปีเพื่อกำหนดตัวคูณ bonus
        x = 0.2 ;
    }else if (y >= 4 ) {
        x = 0.15 ;
    }else if ( y >= 1 ) {
        x = 0.1 ;
    }else {
        x = 0 ;
    }                                                           //จบ if

    munny1 = munny * x ;                                        //คำนวน bonus
    munny2 = munny * bonus ;                                    //คำนวน Special bonus
    munny = munny + munny1 + munny2 ;                           //คำนวน net salary

    printf( "Basic salary = %d \n", i ) ;                       
    printf( "Bonus based on length of service = %d \n", munny1 ) ;
    printf( "Special bonus = %d \n", munny2 ) ;
    printf( "net salary = %d \n", munny ) ;
    printf( "_____________________________________________________________________- \n" ) ;

    return 0 ; 
}                                                                  //จบ main