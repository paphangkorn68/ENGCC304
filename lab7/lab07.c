#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    bool condition = true ;
    int N , score , number , Number_player ;
    do {
        int Max_number = 100 ;
        int Min_number = 1 ;
        printf( "Do you want to play game (1=play,-1=exit)\n" ) ;
        scanf( "%d" , &N ) ;
        if ( N != 1 && N != -1 ) {
            printf( " pud the number 1 or -1 only\n " ) ;
            while (getchar() != '\n');
            continue ;
        }
        else if (  N == -1 ) {
            printf( "See you again." );
            condition = false ;
            break ;
        }
        else {
            score = 100 ;
            srand( time( NULL ) ) ;
            number = rand() % 100 + 1 ;
            printf( "score %d\n" , score ) ;
            printf( "Guess the winning number %d - %d. \n" , Min_number , Max_number ) ;
        }
        do {
            printf( "Guess " ) ;
            scanf( "%d" , &Number_player ) ;
            if( score <= 0 ) {
                printf( "You lose! the winning number is %d.\n" , number ) ;
                break ;
            }
            else if ( Number_player == number ) {
                printf( "That is correct! The winning number is %d.\n" , number ) ;
                printf( "score is %d.\n" , score ) ;
                break ;
            }
            else if ( Number_player > Max_number || Number_player < Min_number ) {
                printf( "Guess the winning number %d - %d. \n" , Min_number , Max_number ) ;
                continue ;
            }
            else if ( Number_player > number ) {
                Max_number = Number_player - 1 ;
                score -= 10 ;
                printf("score %d \n" , score ) ;
                printf("Sorry, the winning number is LOWER than %d.\n" , Number_player ) ;
                printf( "Guess the winning number %d - %d. \n" , Min_number , Max_number ) ;
            }
            else if( Number_player < number ) {
                Min_number = Number_player + 1 ;
                score -= 10 ;
                printf("score %d \n" , score ) ;
                printf("Sorry, the winning number is HIGHER than %d.\n" , Number_player ) ;
                printf( "Guess the winning number %d - %d. \n" , Min_number , Max_number ) ;
            }
        }while( condition == true ) ;
    }while( condition == true ) ;

    return 0;
}