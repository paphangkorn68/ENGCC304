#include <stdio.h>
#include <math.h>

void num_a( int num ) ;                         //ประกาศฟังก์ชันต้นแบบ

int main() {

    int num ;                                   //ประกาศตัวแปล num ไว้รับค่าที่ใส่เข้าไป
    printf( "enter number \n" ) ;               //แสดง enter number
    scanf( "%d" , &num ) ;                      //รับค่า

    num_a( num ) ;                              //นำค่าที่ใส่ใน num ไปใช่ในฟังก์ชัน
    return 0 ;
}                                               //จบฟังก์ชัน main

void num_a( int num ) {                         //ฟังก์ชั่น num_a

    int org = num ;                             //org มีค่าเท่ากับ num เพื่อใช่ในการเปรียบเทียบ
    int num_t = num ;                           //num_t ให้มีค่าเป็น num เพื่อใช้เป็นตัวเปรียนค่า
    int dis = 0 ;                               //ใช่เก็บค่าจำนวนหลัก
    int di = 0 ;                                //ใช่เก็บค่าที่จะต้องนำไปยกกำลัง
    int sum  = 0 ;                              //ใช่เก็บค่าที่ได้จากการยกกำลัง

    while (num_t != 0) {                        //loopที่ใช้หาว่าจัวเลขมีกี่หลัก
        num_t = num_t / 10 ;
        dis++ ;
    }                                           //จบ while
    
    num_t = num ;                               //รีเซ็ตค่า num_t ให้เท่ากับ num

    while( num_t != 0 ) {                       // loop ที่ใช่หาเลขแต่ละหลัก และ คำนวนหาเลขอาร์มสตรอง
        di = num_t % 10 ;
        sum += pow( di , dis ) ;
        num_t = num_t / 10;
    }                                           //จบ while
    
    if( sum == org ) {                          //ถ้า sum == org จริงให้แสดง pass แต่ถ้าไม่ใช่ให้แสดง not pass
        printf( "pass \n" ) ;
    }else {
        printf("not pass \n") ;
    }

}                                               //จบ ฟังก์ชัน num_a