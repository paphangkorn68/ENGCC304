#include <stdio.h>
#include <string.h>

struct Student {                                                    //ประกาศใช้ Structure
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;                                                       //จบ Structure

void input() ;                                                      //ประกาศใช้ฟังก์ชัน
void grade( S Student[] , int ) ;

int main() {                                                        

    input() ;                                                       //เรียกใช้ฟังก์ชั้น input

    return 0 ;
}                                                                   //จบ main

void input () {                                                     //ฟังก์ชันเก็บค่าต่างๆใน Structure และ แสดง ผลลับ

    int n = 3 , i  ;
    S Student[i] ;                                                  //ทำให้ Student เป็น arr

    for( i = 0 ; i < n ; i++ ) {                                    //loop สำหลับ แสดง และเก็บค่าต่างๆ ใน Structure
        printf( "Student %d \n" , i + 1 ) ;
        printf( "name \n" ) ;
        scanf( "%s" , &Student[i].Name ) ;
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
    }                                                               //จบloop
    for( i = 0 ; i < n ; i++ ) {                                    //loop สำหลับแสดง ค่าต่างๆ
        printf( "name: %s\n" , Student[i].Name ) ;
        printf( "id: %d\n" , Student[i].ID[0] ) ;
        printf( "Scores: %.2f %.2f %.2f %.2f %.2f \n" , 
            Student[i].ScoreSub1 ,
            Student[i].ScoreSub2 , 
            Student[i].ScoreSub3 , 
            Student[i].ScoreSub4 , 
            Student[i].ScoreSub5 ) ;
            
        grade(Student, i) ;                                         //ใช่ฟังก์ชัน grade เพื่อหาเกลด และคะแนนเฉลี่ย
        printf( "\n" ) ;
        
    }                                                               //จบloop
}

void grade( S Student[] , int i ) {                                 //ฟังก์ชันหา grade


    char sub1[10] ;
    char sub2[10] ;
    char sub3[10] ;
    char sub4[10] ;
    char sub5[10] ;
    float av = 0 ;
    

    if( Student[i].ScoreSub1 >=80 ) {                               //ใช้หาเกลดของ วิชาที่1
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
    }

    if( Student[i].ScoreSub2 >=80 ) {                               //ใช้หาเกลดของ วิชาที่2
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
    }

    if( Student[i].ScoreSub3 >=80 ) {                               //ใช้หาเกลดของ วิชาที่3
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
    }

    if( Student[i].ScoreSub4 >=80 ) {                               //ใช้หาเกลดของ วิชาที่4
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
    }

    if( Student[i].ScoreSub5 >=80 ) {                               //ใช้หาเกลดของ วิชาที่5
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
    }

    av = Student[i].ScoreSub1 + Student[i].ScoreSub2 + Student[i].ScoreSub3 + Student[i].ScoreSub4 + Student[i].ScoreSub5 ;
    av = av / 5 ;                                                   //หาผลรวมของคะแนนแล้วหาร 5
    
    printf("grades %s %s %s %s %s \n",sub1,sub2,sub3,sub4,sub5) ;   //แสดงเกลด ของวิชาต่างๆ
    printf("Average Scores %.2f \n" , av ) ;                        //แสดงค่าเฉลี่ย
    
}                                                                   //จบฟังก์ชั่น