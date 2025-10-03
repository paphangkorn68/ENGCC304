#include <stdio.h>

int main() {                                        //เริ่ม main

    char Id[11] ;                                   //ประกาศตัวแปล
    int hrs = 0 ;
    int salary_hr = 0 ;                             
    float salary = 0 ;
    
    printf( "Employees_ID(Max. 10 chars)\n") ;      //แสดง Employees_ID
    scanf( "%10s" , Id ) ;                          //รับค่าที่ใส่เข้ามาใส่ไว้ใน Id
    
    printf( "Input the working hrs:\n") ;           //แสดง Input the working hrs
    scanf( "%d" , &hrs ) ;                          //รับค่าที่ใส่เข้ามาใส่ไว้ใน hrs
    
    printf( "Salary_amout/hr\n") ;                  //แสดง Salary_amout/hr
    scanf( "%d" , &salary_hr ) ;                    //รับค่าที่ใส่เข้ามาใส่ไว้ใน alary_hr
    
    salary = salary_hr * hrs ;                      //คำนวนหา salary
    
    printf("\n");                                   
    printf("Employees_ID = %s \n" , Id );           //แสดง Employees_ID
    printf("Salary = %.2f " , salary );             //แสดง Salary
    return 0 ;
} //end function
