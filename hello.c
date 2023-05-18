// //STRUCTURE
// #include<stdio.h>
// #include<string.h>
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


