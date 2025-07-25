#include <stdio.h>

int main() {
    int score ;
    printf( "Enter score: " ) ;

    if (scanf ( "%d" , &score) != 1) { //ตรวจสอบว่า score เท่ากับตัวเลขหรือไม่
        printf( "please enter number only.\n" ) ; 
    } 
    else if(score >= 80) {
        printf( "A" ) ;
    }
    else if(score >= 75) {
        printf( "B+" );
    }
    else if(score >= 70) {
        printf( "B" );
    }
    else if(score >= 65) {
        printf( "C+" );
    }
    else if(score >= 60) {
        printf( "c" );
    }
    else if(score >= 55) {
        printf( "D+" );
    }
    else if(score >= 50) {
        printf( "D" );
    }
    else if(score >= 0) {
        printf( "F" );
    }
    else{
        printf( "please enter number only." ) ;
    }    
    return 0 ;
} //จบฟังก์ชัน
