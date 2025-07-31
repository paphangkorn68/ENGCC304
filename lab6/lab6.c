#include <stdio.h>
int main(){
  int i = 0 ;
  int N = 0 ;
  printf( "Enter the number: \n" ) ;
  scanf( "%d", &N ) ;
  if (N%2==0) {
    for( i=0 ; i <= N ; i += 2 ){
      printf( "%d\n", i ) ;
    }
  }
  else{
    for( i=1 ; i <= N ; i += 2 ){
      printf( "%d\n",i ) ;
    }
  }  
  return 0;
}