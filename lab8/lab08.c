#include <stdio.h>

int main() {
    int sec, munny, munny1, munny2, i, pj, y ;
    float x, bonus;
    do {
        printf( "What is your position? \n" ) ;
        printf( "Junior Programmer    = 1 \n" ) ;
        printf( "Mid-Level Programmer = 2\n" ) ;
        printf( "Senior Programmer    = 3 \n" ) ;
        if( scanf( "%d", &sec ) != 1 ) {
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
        }
    }while( 1 ) ;
    i = munny ;
    do {
        printf( "How many years have you worked? \n" ) ;
        if( scanf( "%d", &y ) != 1 ) {
            printf( "number only \n" ) ;
            while ( getchar() != '\n' ) ;
        }else {
            break ;
        }
    }while( 1 ) ;
    do {
        printf( "How many projects have you completed? \n" ) ;
        if( scanf( "%d", &pj ) != 1 ) {
            printf( "number only \n" ) ;
            while ( getchar() != '\n' ) ;
        }else {
            break ;
        }
    }while( 1 ) ;
    if( pj > 5 ) {
        bonus = 0.05 ;
    }
    if( y > 5) {
        x = 0.2 ;
    }else if (y >= 4 ) {
        x = 0.15 ;
    }else if ( y >= 1 ) {
        x = 0.1 ;
    }else {
        x = 0 ;
    }
    munny1 = munny * x ;
    munny2 = munny * bonus ;
    munny = munny + munny1 + munny2 ;
    printf( "Basic salary = %d \n", i ) ;
    printf( "Bonus based on length of service = %d \n", munny1 ) ;
    printf( "Special bonus = %d \n", munny2 ) ;
    printf( "net salary = %d\n", munny ) ;
    printf( "_____________________________________________________________________- \n" ) ;
    return 0 ; 
}