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

    long long num;
    int parts[10];                                  // ใช้ array ชั่วคราวเพื่อเก็บกลุ่มตัวเลข
    int count = 0;

    num = salary ;

    while (num > 0) {                               // แยกกลุ่มละ 3 หลักจากขวาไปซ้าย
        parts[count++] = num % 1000;
        num /= 1000;
    }

    printf("Employees_ID = %s \n" , Id );
    printf("Salary = U$ ");

    for (int i = count - 1; i >= 0; i--) {          // แสดงผลจากซ้ายไปขวา
        if (i == count - 1)
            printf("%d", parts[i]);                 // กลุ่มแรกไม่ต้องเติม 0
        else
            printf(",%03d", parts[i]);              // กลุ่มถัดไปเติม 0 ให้ครบ 3 หลัก
    }
    printf( ".00" );                              
         
    

    return 0 ;
} //end function