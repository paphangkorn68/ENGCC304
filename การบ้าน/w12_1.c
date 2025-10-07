#include <stdio.h>
#include <string.h>



struct Student {                                                            //ประกาศ Structure
    char Name[20] ;
    char lName[20] ;
    char ame[50] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;                                                               //จบ Structure

void input() ;                                                              //ประกาศใช่ฟังก์ชัน
void grade( S Student[] , int ) ;

int main() {                                                                //เริ่มmain

    input() ;                                                               //ใช้คำสัง input

    return 0 ;
}                                                                           //จบ main

void input () {                                                             //ฟังก์ชันสำหลับ  รับค่า และแสดงค่าต่างๆใน Structure

    int n = 3 , i ;
    S Student[n] ;
    

    for( i = 0 ; i < n ; i++ ) {                                            //Loop1 รับค่าใส่ข้อมูลในตัวแปลใน Structure
        printf( "Student %d \n" , i + 1 ) ;
        printf( "name \n" ) ;
        scanf( "%s %s" , Student[i].Name , Student[i].lName ) ;
        strcpy( Student[i].ame , Student[i].Name ) ;
        strcat( Student[i].ame , " " ) ;
        strcat( Student[i].ame , Student[i].lName ) ;
        printf( "ID \n" ) ;
        scanf( "%d" , &Student[i].ID[0] ) ;
        printf( "ScoreSub1 \n" ) ;
        scanf( "%f" , &Student[i].ScoreSub1 ) ;
        printf( "ScoreSub2 \n" ) ;
        scanf( "%f" , &Student[i].ScoreSub2 ) ;
        printf( "ScoreSub3 \n" ) ;
        scanf( "%f" , &Student[i].ScoreSub3 ) ;
        printf( "ScoreSub4 \n" ) ;
        scanf( "%f" , &Student[i].ScoreSub4 ) ;
        printf( "ScoreSub5 \n" ) ;
        scanf( "%f" , &Student[i].ScoreSub5 ) ;
        printf( "\n" ) ;
    }                                                                       //จบLoop1

    for( i = 0 ; i < n ; i++ ) {                                            //Loop2 สำหลับแสดงค่าต่างๆในตัวแปล
        printf( "name: %s\n" , Student[i].ame ) ;
        printf( "id: %d\n" , Student[i].ID[0] ) ;
        printf( "Scores: %.0f %.0f %.0f %.0f %.0f \n" , 
            Student[i].ScoreSub1 ,
            Student[i].ScoreSub2 , 
            Student[i].ScoreSub3 , 
            Student[i].ScoreSub4 , 
            Student[i].ScoreSub5 ) ;

        grade(Student, i) ;
        printf( "\n" ) ;
        
    }                                                                       //จบLoop2

}                                                                           //จบฟังก์ชั้น

void grade( S Student[] , int i ) {                                         //ฟังก์ชั้น grade

    char sub1[10] ;                                                         //ประกาศตัวแปล
    char sub2[10] ;
    char sub3[10] ;
    char sub4[10] ;
    char sub5[10] ;
    float av = 0 ;
    
    if( Student[i].ScoreSub1 >=80 ) {                                       //if1 ใช้หาเกลด sub1
        strcpy( sub1 , "A" ) ;
    }else if ( Student[i].ScoreSub1 >= 75 ) {
        strcpy( sub1 , "B" ) ;
        strcat( sub1 , "+" ) ;
    }else if ( Student[i].ScoreSub1 >= 70 ) {
        strcpy( sub1 , "B" ) ;
    }else if ( Student[i].ScoreSub1 >= 65 ) {
        strcpy( sub1 , "C" ) ;
        strcat( sub1 , "+" ) ;
    }else if ( Student[i].ScoreSub1 >= 60 ) {
        strcpy( sub1 , "C" ) ;
    }else if ( Student[i].ScoreSub1 >= 55 ) {
        strcpy( sub1 , "D" ) ;
        strcat( sub1 , "+" ) ;
    }else if ( Student[i].ScoreSub1 >= 50 ) {
        strcpy( sub1 , "D" ) ;
    }else{
        strcpy( sub1 , "F" ) ;
    }                                                                       //จบif1

    if( Student[i].ScoreSub2 >=80 ) {                                       //if2 ใช้หาเกลด sub2
        strcpy( sub2 , "A" ) ;
    }else if ( Student[i].ScoreSub2 >= 75 ) {
        strcpy( sub2 , "B" ) ;
        strcat( sub2 , "+" ) ;
    }else if ( Student[i].ScoreSub2 >= 70 ) {
        strcpy( sub2 , "B" ) ;
    }else if ( Student[i].ScoreSub2 >= 65 ) {
        strcpy( sub2 , "C" ) ;
        strcat( sub2 , "+" ) ;
    }else if ( Student[i].ScoreSub2 >= 60 ) {
        strcpy( sub2 , "C" ) ;
    }else if ( Student[i].ScoreSub2 >= 55 ) {
        strcpy( sub2 , "D" ) ;
        strcat( sub2 , "+" ) ;
    }else if ( Student[i].ScoreSub2 >= 50 ) {
        strcpy( sub2 , "D" ) ;
    }else{
        strcpy( sub2 , "F" ) ;
    }                                                                       //จบif2

    if( Student[i].ScoreSub3 >=80 ) {                                       //if3 ใช้หาเกลด sub3
        strcpy( sub3 , "A" ) ;
    }else if ( Student[i].ScoreSub3 >= 75 ) {
        strcpy( sub3 , "B" ) ;
        strcat( sub3 , "+" ) ;
    }else if ( Student[i].ScoreSub3 >= 70 ) {
        strcpy( sub3 , "B" ) ;
    }else if ( Student[i].ScoreSub3 >= 65 ) {
        strcpy( sub3 , "C" ) ;
        strcat( sub3 , "+" ) ;
    }else if ( Student[i].ScoreSub3 >= 60 ) {
        strcpy( sub3 , "C" ) ;
    }else if ( Student[i].ScoreSub3 >= 55 ) {
        strcpy( sub3 , "D" ) ;
        strcat( sub3 , "+" ) ;
    }else if ( Student[i].ScoreSub3 >= 50 ) {
        strcpy( sub3 , "D" ) ;
    }else{
        strcpy( sub3 , "F" ) ;
    }                                                                       ////จบif3

    if( Student[i].ScoreSub4 >=80 ) {                                       //if4 ใช้หาเกลด sub4
        strcpy( sub4 , "A" ) ;
    }else if ( Student[i].ScoreSub4 >= 75 ) {
        strcpy( sub4 , "B" ) ;
        strcat( sub4 , "+" ) ;
    }else if ( Student[i].ScoreSub4 >= 70 ) {
        strcpy( sub4 , "B" ) ;
    }else if ( Student[i].ScoreSub4 >= 65 ) {
        strcpy( sub4 , "C" ) ;
        strcat( sub4 , "+" ) ;
    }else if ( Student[i].ScoreSub4 >= 60 ) {
        strcpy( sub4 , "C" ) ;
    }else if ( Student[i].ScoreSub4 >= 55 ) {
        strcpy( sub4 , "D" ) ;
        strcat( sub4 , "+" ) ;
    }else if ( Student[i].ScoreSub4 >= 50 ) {
        strcpy( sub4 , "D" ) ;
    }else{
        strcpy( sub4 , "F" ) ;
    }                                                                       //จบif4

    if( Student[i].ScoreSub5 >=80 ) {                                       //if5 ใช้หาเกลด sub5
        strcpy( sub5 , "A" ) ;
    }else if ( Student[i].ScoreSub5 >= 75 ) {
        strcpy( sub5 , "B" ) ;
        strcat( sub5 , "+" ) ;
    }else if ( Student[i].ScoreSub5 >= 70 ) {
        strcpy( sub5 , "B" ) ;
    }else if ( Student[i].ScoreSub5 >= 65 ) {
        strcpy( sub5 , "C" ) ;
        strcat( sub5 , "+" ) ;
    }else if ( Student[i].ScoreSub5 >= 60 ) {
        strcpy( sub5 , "C" ) ;
    }else if ( Student[i].ScoreSub5 >= 55 ) {
        strcpy( sub5 , "D" ) ;
        strcat( sub5 , "+" ) ;
    }else if ( Student[i].ScoreSub5 >= 50 ) {
        strcpy( sub5 , "D" ) ;
    }else{
        strcpy( sub5 , "F" ) ;
    }                                                                       //จบif5

    av = Student[i].ScoreSub1 + Student[i].ScoreSub2 + Student[i].ScoreSub3 + Student[i].ScoreSub4 + Student[i].ScoreSub5 ;
    av = av / 5 ;                                                           //ใช้หาค่าเฉลี่ย
    
    printf("grades %s %s %s %s %s \n",sub1,sub2,sub3,sub4,sub5) ;           //ประกาศ คะแนน
    printf("Average Scores %.2f \n" , av ) ;                                //ประกาศ คะแนนเฉลี่ย
    
}                                                                           //จบ ฟังก์ชั้น