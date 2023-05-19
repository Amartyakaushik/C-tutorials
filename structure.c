#include<stdio.h>
#include<string.h>

// //STRUCTURE
// struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// };

// //STRUCTURE TO FUNCTION CALL
// void printinfo(struct student s1);

// //TYPE DEF KEYWORD
// typedef struct computersciencestudent{
//     char name[100];
//     // char section[13];
//     int roll;
//     float cgpa;    
// } coe;

// int main(){
//     // //details of  first student
//     // printf("Details of first student...\n");
//     // struct student s1;
//     // // s1.name="Amartya Kaushik";
//     // strcpy(s1.name,"Amartya Kausik");
//     // s1.roll=46;
//     // s1.cgpa=8.46;
//     // // strcpy(s1.section,"KOCBZ");
//     // printf("Name: %s\nRoll: %d\nCGPA:%f\n",s1.name,s1.roll,s1.cgpa);

//     // //details of second student
//     // printf("Details of second student...\n");
//     // struct student s2;
//     // strcpy(s2.name,"Charchil Raj");
//     // s2.roll=52;
//     // s2.cgpa=8.9;
//     // // s2.section="KOCDM"
//     // printf("Name:%s\nRoll:%d\nCGPA:%f\n",s2.name,s2.roll,s2.cgpa);

//     // //INITIALIIZATION OF STRUCTURE
//     // struct student s3={"Suraj Kumar",01,9.9};
//     // printf("%s\n%d \n%f\n",s3.name,s3.roll,s3.cgpa);

//     // //ARRAY OF STRUCTURES
//     // struct student ece[10];
//     // struct student IT[10];
//     // // struct student IT[0]={"Priya Thakur",02,9.12};
//     // IT[0].roll=02;
//     // IT[0].cgpa=9.19;
//     // strcpy(IT[0].name,"Priya Thakur");
//     // // printf("%s\n%d\n%f\n",IT[0].name,IT[0].roll,IT[0].cgpa);
//     // printf("%d",IT[0].roll);

    
//     // //POINTER TO STRUCTURE...
// //    struct student s4={"Gaurav",03,8.8};
//     // struct student *ptr=&s4;
//     // printf("Student roll: %d\n",s4.roll);
//     // printf("Student roll: %d\n",(*ptr).roll);    

//     // //ARROW OPERATOR
//     // printf("Student->roll: %d\n",ptr->roll);
//     // printf("Student->name:%s\n",ptr->name);
//     // printf("Student->cgpa:%f\n",ptr->cgpa);
    
//     //FUNCTION CALL
// //    printinfo(s4);

//     //USING TYPE DEF KEYWORD 
//     coe s5={"Khushi",34,9.8};
//     s5.roll=34;
//     s5.cgpa=9.8;
//     strcpy(s5.name,"Khushi");
//     printf("%s\n%d\n%f",s5.name,s5.roll,s5.cgpa);
// }

// // void printinfo(struct student s1){
// //     printf("Student->roll: %d\n",s1.roll);
// //     printf("Student->name:%s\n",s1.name);
// //     printf("Student->cgpa:%f\n",s1.cgpa); 
// // }

// // Q)Enter address (house no.,block,city,state) of 5 people
// typedef struct address{
//     int house_no;
//     int block;
//     char city[13];
//     char state[13];
// } add;

// void printaddress(struct address person);

// int main(){
//     add p[5];
//     printf("Provide the address of all the 5 persons...\n");
//     scanf("%d\t%d\t%s\t%s\n",&p[0].house_no,&p[0].block,&p[0].city,&p[0].state);
//     scanf("%d\t%d\t%s\t%s\n",&p[1].house_no,&p[1].block,&p[1].city,&p[1].state);
//     scanf("%d\t%d\t%s\t%s\n",&p[2].house_no,&p[2].block,&p[2].city,&p[2].state);
//     scanf("%d\t%d\t%s\t%s\n",&p[3].house_no,&p[3].block,&p[3].city,&p[3].state);
//     scanf("%d\t%d\t%s\t%s\n",&p[4].house_no,&p[4].block,&p[4].city,&p[4].state);

//     printaddress(p[0]);
//     printaddress(p[1]);
//     printaddress(p[2]);
//     printaddress(p[3]);
//     printaddress(p[4]);
// }

// void printaddress(struct address person){
//     printf("%d\t",person.house_no);
//     printf("%d\t",person.block);
//     printf("%s\t",person.city);
//     printf("%s\t",person.state);
//     printf("\n");
// }

//// Q) CREATE A PROGRAM TO FIND THE SUM OF TWO VECTORS...
//struct vector {
//    int x;
//    int y;
//};
//void sum_vec(struct vector v1,struct vector v2,struct vector sum);
//int main(){
//    struct vector v1={4,9};
//    struct vector v2={3,7};
//    struct vector sum={0};
//    sum_vec(v1,v2,sum);
//}
//void sum_vec(struct vector v1,struct vector v2,struct vector sum){
//    sum.x=v1.x+v2.x;
//    sum.y=v1.y+v2.y;
//    printf("The sum of vectors are:{%d,%d}",sum.x,sum.y);
//}

//CREATE A STRUCTURE TO STORE COMPLEX NUMBERS(USE ARROW OPERATOR)...
//YOU HAVE TO STORE THE MARKS OF 30 STUDENTS IN CLASS.

// //MAKE A STRUCTURE TO STORE BANK ACCOUNT INFORMATION OF A CUSTOMER OF ABC BANK.ALSO,MAKE AN ALIAS FOR IT.
// typedef struct bank_account {
//     char name[20];
//     int acc_n;
// }ba;

// void acc_info(ba person);

// int main(){
//     ba p1={"Amartya Kaushik",466410110};
//     ba p2={"Charchil Raj",21345452};
//     acc_info(p1);
//     acc_info(p2);
// }
// void acc_info(ba person){
//     printf("Name:%s\tAccount number:%d\n",person.name,person.acc_n);
// }

// Q) HOMEWORK SET
// MAKE A SYSTEM THAT CAN STORE INFOMATION OF ALL STUDENTS,TEACHERS AND STAFF OF YOUR COLLEGE IN THE FORM OF STRUCTURES.  YOU CAN ALSO MAKE THIS INTO A C PROJECT WITH OTHER FUNCITONALITIES LIKE CGPA CALCULATION OF STUDENTS,STORING ATTENDANCE ETC.
