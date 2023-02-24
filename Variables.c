#include<stdio.h>
#include<math.h>
int main(){
	// Different types of Variables 
//	int number=25;  // Integer type 
//	printf("number : %d \n ",number);
//	
//	float pi=3.14;  // Float type
//	char star="*";  // Character type 
//	int age=22;
//	age=24;       //to change the value of the variables. 
//	
//	int b=88;
//	int B=89; // Variables are case sensitive.
//	
//	int _age=24; // Variables should always start with any alphabets or '_'.
//	int final_price=100; // No Spaces or comma ',' between the variables only '_' can be used.
	
	
	// Constants :- Variables which are fixed
//	
//	printf("print my name \n");
	
//	printf("pi : %f \n ",pi);  // To print the integer
//	printf("star : %c \n",star);
//	printf(" age : %d \n",_age);
//	printf("b : %d \n",b);
//	printf("B : %d \n",B);
//	printf("final price : %d",final_price);
//	

//	int a;
//	printf("enter a no.");
//	scanf("%f",&a);
//	printf("%f",a*3);
	
//	printf("print my name \n");
//	printf("print anything \n");
//	printf("KNFFEWFJJ FFJFJ FF \n");

    // const int a=5;
    // printf("%d",a);
//    int i=-3;
//	int l=i%2;
//	printf("%d",l);

//Arithmetics operators
// (pow)
//int a,b;
//printf("enter a,b: ");
//scanf("%d%d",&a,&b);
//int c=pow(a,b);
//printf("%d",c);

//  (modulo)
//printf("%d \n",11%4);   // (6)
//printf("%d \n",-11%4);  // (-6)
//printf("%d",11.0%4.0);  //modulo is not defined for float value...
	
	// type conversion
//	printf("%d \n",2/3);  // (0)
//	printf("%d \n",2/3);  // (0.000000)
//	printf("%f \n",2/3);  // (0.666666)
//	printf("%d \n",3.0/2);	// (0) output will be float value so...
//	printf("%f \n",3.0/2);  // (1.500000)  // to find exact value...

// to remove no. after decimal 
//int a=(int)1.999999;
//printf("%d",a);
//printf("%d",5*(2/2)*3);  

//int a;
//printf("enter the no.: ");
//scanf("%d",&a);
////printf("%d",a%2==0);  // to check if it is even or not
//printf("%d",a%2!=0);   

//char a='A';
//printf("%c",a);

//int a,b,c;
//printf("enter a,b,c: ");
//scanf("%d%d%d",&a,&b,&c);
//printf("%d",(a+b+c)/3);


 //(if and else)
//int age;
//printf("enter ur age: ");
//scanf("%d",&age);
//if(age>18){
//	printf("Adult \n");
//	printf("can vote");
//    }
//else if(age>13 && age<=18){
//	printf("Teenager");
//    }
//else {
//	printf("not an adult");
//    }

//int marks;
//scanf("%d",&marks);
//if (marks>90){
//	printf("Grade: A+");
//}
//else if(marks>80 && marks<90){
//	printf("Grade: A");
//}
//else if(marks>70 && marks<80){
//	printf("Grade: B+");
//}
//else if(marks>60 && marks<70){
//	printf("Grade: B");
//}
//else{
//	printf("Fail");
//}
	
	// ternary operator
//	int age;
//	printf("enter the age: ");
//	scanf("%d",&age);
//	age >20 ? printf("valid for the process") : printf("Sorry! have a good day");


//switch
//    char ch;
//    printf("enter the day :"); //'m'-mon,'t'-tues,'w'-wed...
//    scanf("%s",&ch);
//	switch(ch){
//	case 'm':printf("monday");
//	break;
//	case 't':printf("tuesday");
//	break;
//	case 'w':printf("wednesday");
//	break;
//	case 'T':printf("thursday");
//	break;
//	case 'f':printf("friday");
//	break;
//	case 's':printf("saturday");
//	break;
//	case 'S':printf("sunday");
//	break;
//	default :printf("enter a valid day");
//    }

//nested
//int i;
//scanf("%d",&i);
//if(i>=0){
//	printf("it's a positive no. \n");
//	if(i%2==0){
//		printf("and even no.");
//	}else{
//		printf("and odd no.");
//	}
//}else{
//	printf("it's not a positive no.");
//}


//   //ternory method
//int marks;
//scanf("%d",&marks);
//marks>30?printf("you passed"):printf("you failed");

////nested mehtod
//if(marks<30){
//	if (marks>=0){
//	printf("fail");
//	}else{
//		printf("enter valid marks");
//	}
//}else if(marks>=30 && marks<=100){
//	printf("pass");
//}else{
//	printf("ente a valid marks");-
//}

//char ch;
//printf("enter the character: ");
//scanf("%c",&ch);
//if(ch>='A' && ch<='Z'){
//	printf("it's an upper case letter");
//}else if(ch>='a' && ch<='z'){
//	printf("it's a lower case letter");
//}else{
//	printf("enter a valid english alphabets");
//}


////Armstrong no.
//int i,arm=0,n,o;
//printf("enter the number: ");
//scanf("%d",&i);
//o=i;
//while(i!=0){
//	n=i%10;
//	arm=arm+(n*n*n);
//	i=i/10;
//}
//if(o==arm){
//printf("%d",arm);	
//}else{
//	printf("not an armstrong number");
//}

////Natural no.
//int n;
//printf("enter the no.");1
//scanf("%d",&n);
//if(n>=1){
//	printf("it's a natural no.");
//}else{
//	printf("not a natural no.");
//}


    return 0;
}
