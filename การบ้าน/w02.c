#include <stdio.h>

int main() {                                    //เริ่ม main

    char Name[50] ;                             //ประกาศตัวแปล
    int  Age = 0 ;

    printf( "Enter your name: " ) ;             
    scanf( "%s", &Name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", &Age ) ;
    printf( "- - - - - -\n" ) ;
    printf( "Hello %s \n", Name ) ; 
    printf( "Age = %d \n", Age ) ; 

    return 0 ;
}//end main function