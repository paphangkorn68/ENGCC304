#include <stdio.h>

void swapNumbers( int *a , int *b ) ;

int main() {

    int num1 = 0, num2 = 0 ;

    printf( "num1 :" ) ;
    scanf( "%d" , &num1 ) ;
    printf( "num2 :" ) ;
    scanf( "%d" , &num2 ) ;

    int *ptr1 = &num1 ;
    int *ptr2 = &num2 ;
    printf("before %d , %d \n" , num1 , num2 ) ;
    swapNumbers( ptr1 , ptr2 ) ;
    printf("after %d , %d \n" , num1 , num2 ) ;
    return 0 ;
}

void swapNumbers( int *a , int *b ) {
    *a = *a + *b ;
    *b = *a - *b ;
    *a = *a - *b ;
}