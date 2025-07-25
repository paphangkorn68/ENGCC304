#include <stdio.h>

int main() {
    char Id[10] ;
    int hrs = 0 ;
    int salary_hr = 0 ;
    float salary = 0 ;
    
    printf( "Employees_ID(Max. 10 chars)\n") ;
    scanf( "%10s" , Id ) ;
    
    printf( "The_working_hrs\n") ;
    scanf( "%d" , &hrs ) ;
    
    printf( "Salary_amout/hr\n") ;
    scanf( "%d" , &salary_hr ) ;
    
    salary = salary_hr * hrs ;
    
    printf("Employees_ID = %s \n" , Id );
    printf("Salary = %.2f " , salary );
}
 