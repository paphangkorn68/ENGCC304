#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    FILE *fd ;
    char x[50] ;

    printf( "en ter name fi " ) ;
    scanf( "%s" , x ) ;
    fd = fopen( x ,"r");
    if( fd == NULL ) {
        printf("\n error opening file ") ;
        exit( 0 ) ;
    }
    int i = 0 ;
    char sen[50][50] ;
    while(fscanf( fd , "%s " , sen[i]  ) != EOF ) {
        i++ ;
    }
    printf( "Total number of words in '%s' : %d" , x , i ) ;
    fclose( fd ) ;
    
    return 0 ;
}