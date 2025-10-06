#include <stdio.h>
#include <math.h>

int main() { 

    int n, root, j, i ;                             //กำหนดตัวแปล
    int ip[100] ;                                   //กำหนดจำนวนห้อง ip 100 ห้อง 
    int ev[100] ;                                   //กำหนดจำนวนห้อง ev 100 ห้อง

    printf( "put number : " ) ;
    while ( scanf("%d", &n) != 1 || n <= 0 ) {      //เช็กว้า n เป็นตัวอักศรหรือเลข 0 หรือไม่ ถ้าใช่ ให้แสดง number only และล้างบัฟเฟอ
        printf("number only: ") ;                   
        while(getchar() != '\n') ;                         
    }                                               //จบ while 

    for( i = 0 ; i < n ; i++ ) {                    //for loop นี้ใช้วนตรวจสอบ ev[i]
        printf( "Enter value[%d]: ", i ) ;
        while( scanf( "%d" , &ev[i] ) != 1 ) {
            printf( "number only " ) ;
            while( getchar() != '\n' ) ;
        }                                           //จบ while

        ip[i] = 1 ;                                 //กำหนดให้ ip[i]ทุกตัว = 1        

        if( ev[i] < 2 ) {                           //เช็ค ev < 2 หรือไม่ ถ้าใช่ ให้ ip[i] = 0
            ip[i] = 0 ;
        }else {                                     //ถ้าไม่ใช่ ให้คำนวนหาเลขเฉพาะ
            root = sqrt( ev[i] ) ;
            for( j = 2 ; j <= root ; j++ ) {        //คำนวนหาเลขเฉพาะ
                if( ev[i] % j == 0 ) {
                    ip[i] = 0 ;
                    break ;
                }                                   //จบ if
            }
        }                                           //จบ if
    }                                               //จบ foe loop

    for( i = 0 ; i < n ; i++ ) {                    //for loop ถ้า i < n ลูปไปเลือยๆ
        if ( ip[i] == 1 ) {                         //if ตรวจว่า ip[i] == 1 หรทอไม่ ถ้าใช่ ให้แสดงตัวเลขใน ev
            printf( "%d ", ev[i] );
        } else {                                    //ถ้าไม่ใช่ ให้แสดง #
            printf( "# " );
        }
    }                                               //จบ foe loop
        
    return 0 ;
}                                                   //จบ main