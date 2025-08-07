
#include <stdio.h>
int main(){
  int i = 0 ;
  int N = 0 ;
  printf( "Enter the number: \n" ) ;
  if (scanf( "%d", &N ) != 1 ) {
      printf("number only");
  }
  else if ( N%2==0 ) {
      for ( i = N ; i != 0 ; i -= 2 ) {
          printf( " %d" , i ) ;
      }
      printf( " %d" , i ) ;
  }
  else {
      for ( i = 1 ; i != N ; i += 2 ) {
          printf( " %d" , i ) ;
      }
      printf( " %d" , i ) ;
  }
  return 0;
}
