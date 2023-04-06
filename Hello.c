#include<stdio.h>
#include<math.h>
#include<conio.h>
//823
//int add(int x,int y
//	printf("%d",x+y);
//}
//830
//int swap(int *a,int* b);
//848
//void fn1(int a){
//	printf("%d",a);
//	return a*a;
//}
//849
//int show();

//867
//int fact(int x);

//879
//int fibo(int x);

//int sqr(int y)
//{
//	return y*y;
//}
//void show();
//int swap(int x,int y);


////1145
//void staticfun(){
//	static int i;
//	{
//		static int i=1;
//		printf("%d\n",i);
//		i++;
//	}
//	printf("%d\n",i);
//	i++;
//}

////1149
//static int gint=1;
//static void staticfun(){
//	static int i;
//	printf("%d",i);
//	i++;
//	printf("%d",gint);
//	gint++;
//}

////1195
//int f(int n)
//{
//	static int i=1;
//	if (n>=5)
//	return n;
//	n=n+i;
//	printf("%d",n);
//}

//1457
//void reference(int[],int);

//1477
//void value(int u);

//1680
//struct car{
//	char *name;
//	int seats; 
//	float price;
//};

////1692
//struct car{
//	char name[50];
//	int seats;
//	float price;
//};

//1710
struct car{
	char name[50];
	int seats;
	float price;
};

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
	
//	printf("pi : %f \n ",pi);    // ( %f ) is a format specifier used  to print the Real number case output 
//	printf("star : %c \n",star);  //( %c ) is a format specifier used  to print the Character  case output 
//	printf(" age : %d \n",_age);   //( %d ) is a format specifier used  to print the integer  case output 
//	printf("b : %d \n",b); 
//	printf("B : %d \n",B);
//	printf("final price : %d",final_price);
	
//	 To take input from the user a special function is used " scanf() "
//	int num;
//	printf("enter ur num : ");
//	scanf("%d",&num);
//	printf("number is : %d",num*3);

//   // COMPILATION
//    int A,B;
//    printf("enter A: ");
//    scanf("%d",&A);
//    
//    printf("enter B : ");
//    scanf("%d", &B);
//    
//    int sum=A+B;
//    printf("sum is : %d",sum);


//	int a;
//	printf("enter a no.");
//	scanf("%f",&a);
//	printf("%f",a*3);

//    char first_name;
//    printf("first name : ");
//    scanf("%c",&first_name);
//    
//    char last_name;
//    printf("last name : ");
//    scanf("%c",&last_name);
//    
//    char  name=first_name+last_name;
//    printf("ur name : %c",name);

//// Area of a square
//    int side;
//    printf("side of the square: ");
//    scanf("%d",&side);
//    
//    printf("Area of the square is : %d",side*side);

//// Area of a circle
//    float radius;
//    printf("radius of the circle: "); 
//    scanf("%f",&radius);
//    
//    printf("Area of the circle is : %f",3.14*radius*radius);
	
	
	
	
	// //CHAPTER 02    (Instructions)
//	    // Type declaration instruction

//	int a=22;
//	int b=a;
////    int b=c*3;  // As a variable can't be used before declaring...
//	int c=b*3;
//	int e=c+1;	
//	printf("%d \n",a);
//	printf("%d\n",b);	
//	printf("%d\n",c);
	 
//	int x,y,z;   //  we can declare multiple variables at once 
//	x=y=z=4;      // and also assign at once 
//	printf("%d \n",x);
//	printf("%d \n",y);
//	printf("%d \n",z);

//    int x=y=z=5;  // Invalid as we can't use and declare variables together

	
//		//    Arithmetic instruction

//    int x=2,y=4;
//    int sum=x+y;  // 'x' and 'y' are the "Operands" and '+' is the "Operator"
//    
////    int a,b=x*y; // there should be single variable on the LHS...

//Valid statement
//    int a=b+c;
//    int x=z*s;
//    int w=q/x; 

//    int o,p;
//    o=p=3;
//    int l=pow(o,p);   // here pow(o,p) means ('o' to the power 'p') o^p...
//    printf("%d",l);    // for using "pow" #include<math.h> should be assigned
//    printf("%d",23%3);   // "%" is known as  "modular" to give remainder in the division of two no.s...
//    printf("%d",23/3);   // "/" is known as  "modular" to give quotient in the division of two no.s...
//    printf("%d",23.3%3);   // as "%" modular is not defined for float value...
//    printf("%d",-23%3);   // for -ve value ,remainder will be also be -ve value...
//    printf("%d",-23/3);   // for -ve value ,quotient will be also be -ve value...

//               nn   // INT op INT --> INT
//    printf("%d \n",23%2);   // 
//                   // FLOAT op INT --> FLOAT
//    printf("%f \n",3.3*4);
//                   // FLOAT op FLOAT --> FLOAT
//    printf("%f \n",3.3*4.0);
    
//                              /   Invalid statement
////    int a+b=c;
////    int x=yz;
////    int s=e^k;
    
//                  // type conversion 
//    int a=(int) 1.99999;     // "implicit" conversion "float" to "int"...
//    printf("%d",a);

//                  // operator precedence(priority)
//    int a,b,c;
//    a=b=c=5;
//    int d=a+b*c;     // ('*' , '/' , '%') <-- ('+' , '-') <-- ('=')
//    printf("%d \n",d);
    
//                   // Associativity (for same precedence)
//    int e=d*c/b*a;        // Left to right for same preceddence
//    printf("%d \n",e);
    
//    printf("%d \n",5*2-5*3);   // ('*') <-- ('-')
//    printf("%d \n",5*2/2*3);   // ('*') <-- ('/')
//    printf("%d \n",5*(2/2)*3);  // '()' <--  '*'
//    printf("%d \n",5+2/2*3);   // ('/') <-- ('*') <-- ('+')S

//    int i=-3;
//	int l=i%2;
////	printf("%d",l);
//	printf("%u \n",l);
//
//    int i =3;
//    int l=i/-2;
//    int k=i%-2;
//    printf("%d %d \n",l,k);
//
//    int x=5.3%2;
//    printf("%d",x);

//    int a=10;
//    double b=5.6;
//    int c;
//    c=a+b;
//    printf("%d",c);

//    int a=5;
//    int c;
//    c=a++;    /// Post operator 
//    printf("%d \n",c);
//    printf("%d \n",a);

//    int a=5;
//    int c;
//    c=a++;
//    printf("%d \n",c);
//    printf("%d \n",a);
    
//    int b=9;
//    int d;
//    d=b--;
//    printf("%d \n",d);
//    printf("%d \n",b);

//    int x=3,y,z;
//    y=x++;
//    z=++x;
//    printf("\n%d,%d,%d",x,y,z);

//    int a=1,b=1,c;
//    c=a++ +b;
//    printf("%d,%d,%d",a,b,c);

//    int d,a=1,b=2;
//    d=a++ + ++b;
//    printf("%d \n %d\n %d\n",d,a,b);

//    int x=4,y,z;
//    y=--x;
//    z=x--;
//    printf("%d%d%d",x,y,z);

//    int a=10,b=20;
////    int c=a<b;
////    int c=a>b;
////    int c=a<=b;
////    int c=a<=b;
////    int c=a==b;
//    int c=a!=b;
//    printf("%d",c);

//    int a=10,b=5,c=5;
//    int d;
//    d=b+c==a;
//    printf("%d",d);

//    int a=10,b=0,c;
//    c=a&&b;
//    printf("%d",c);

//    int a=10,b=0,c=2,d;
//    d=a&&b||c-2;
//    printf("%d",d);

//    int x=1,y=0,z=5;
//    int a=x&&y||z++;
//    printf("%d",z);

//                                             // IMPORTANT
//    int x=1,y=0,z=5;
//	int a=x&&y&&z++;
//	printf("%d",z); 

//    int a=5,b=6;
//	a+=b;
//	printf("%d %d",a,b); 

//    int a=5,b=6;
//	a-=b;
//	printf("%d %d",a,b); 

//    int a=5,b=6;
//	a*=b;
//	printf("%d %d",a,b);

//    int a=5,b=6;
//	a/=b;
//	printf("%d %d",a,b); 

//    int a=5,b=6;
//	a%=b;
//	printf("%d %d",a,b);  

//    int a=5,b=6;
//	a<<=b;
//	printf("%d %d",a,b); 

//    int a=5,b=6;
//	a>>=b;
//	printf("%d %d",a,b); 


//// Conditional operator
//    int age;
//    printf("enter ur age: ");
//    scanf("%d",&age);
//    (age>18)?printf("you are eligible to vote "):
//    printf("you are not");
////    if (age>18);
////    printf("you are eligible to vote ");
////	else;
////    printf("you are not eligible to vote");

//    int a=2,b=4;
//    printf("a=%d,b=%d\n",a,b);
//    printf("a&b=%d \n",a&b);
//    printf("a|b=%d\n",a|b);
//    printf("a^b=%d\n",a^b);
//    printf("~a=%d\n",~a);
//    printf("~b=%d\n",~b);
//    printf("b<<1=%d\n",a<<b);
//    printf("b>>1=%d\n",a>>b);

//    int a,b;
//    printf("%d",a&b);

//    int a=8,b=3;
//    printf("%d",a|b);

//    int a=10;
//    printf("%d",~a);

//    printf("%d",4+8/2*3);
//    printf("%d\n",3*(4%5)/2);
//    printf("%d",3*((4%5)/2));

//    int a=0,b=1,c=-1;
//    float x=2.5,y=0.0;
//    printf("%d",a&&b);
//    printf("%d",b+c||!a);
//    printf("%d",x*5&&5||(b/c));
//    printf("%d",12.5&&5);
//    printf("%d",(!x)||(!c)||(b=c));
//    printf("%d",!(-1));

//    double s =5%3&4+5*6;
//    printf("%lf",s);
    
//    double d=3&&5&4%3;
//    printf("%lf",d);
////    printf("%d",d);  // doubt

//    double d =5&3&&4||5|6;
////    printf("%lf",d);
//    printf("%f \n",5.0||5.0);
//    printf("%d",1||5);
     
//    int x=(3,2,5);                            // IMPORTANT
//    printf("%d",x);

//    int b =4*6+3*4<3?4:3;
//    printf("%d",b);
//
//    int x=5;
//    if(x<1)
//      printf("hello");
//    if (x==5)
//      printf("hi");
//    else
//      printf("no");
      
//    int x=5;
//    if(x<=5)
//      printf("hello");
//    if (x==5)
//      printf("hi");
//    else
//      printf("no");

//    int x=0;
//    if(x==0)
//    printf("hi");
//	else
//    printf("how are u");
//    printf("hello");

//    int a;
//    printf("enter the number: ");
//    scanf("%d",&a);
// 
//    if (a<10)
//    printf("no. is less than 10");
//    else if (a<100)
//    printf("no. is less than 100");

//    float marks;
//    scanf("%f",&marks);
//    if (marks>90){
//    	printf("Grade A");
//	}
//	else  if (marks>80){	
//		printf("Grade B");
//	}
//	else if (marks>70){
//		printf("Grade C");
//	}
//	else if (marks>60){
//		printf("grade D");
//	}
//	else {
//	printf("fail");
//	}

//    int i=10;
//    if (i==10){
//    	if (i<15)
//    	printf("i is smaller than 15\n");
//    	if (i<12)
//    	printf("i is smaller than 12 too\n");
//    	else 
//    	printf("i is greater than 15");
//	}

//    int x=0;
//    if (x==1)
//      if (x>=0)
//      printf("true \n");
//      else
//      printf("false\n");

//    int x=0;
//    if (x==0)
//      if (x>=0)
//      printf("true \n");
//      else
//      printf("false\n");

//    int x=0;
//	if (x==1)
//	  if (x==0)
//	  printf("imside if \n");
//	  else
//	  printf("inside else if \n");
//	else 
//	printf("inside else \n");   
	
//	int pt;
//	printf("enter the no.of nodes: ");
//	scanf("%d",&pt);
//	switch (pt){
//		case 0:
//			printf("\n No geometry");
//		break;
//		case 1:
//			printf("\n A point");
//		break;
//		case 2:
//			printf("\n A line");
//		break;
//		case 3:
//			printf("\n A triangle");
//		break;
//		case 4:
//			printf("\n A rectangle");
//		break;
//		case 5:
//			printf("\n A pentagon");
//		break;
//		default:
//			printf("invalid input");
//		break;
//	}

//	int pt;
//	printf("enter the no.of nodes: ");
//	scanf("%d",&pt);
//	switch (pt){
//		case 0:
//			printf("\n No geometry");
//		case 1:
//			printf("\n A point");
//		case 2:
//			printf("\n A line");
//		case 3:
//			printf("\n A triangle");
//		case 4:
//			printf("\n A rectangle");
//		case 5:
//			printf("\n A pentagon");
//		default:
//			printf("\ninvalid input");
//		break;
//    }

//    double ch;
//    printf("enter a value between 1 to 2:");
//    scanf("%d",&ch);
//    switch(1){
//    	case 1:
//    		printf("1\n");
//    	case 2:
//    		printf("2");
//    		break;
//	}

    // for loop
//    int x;
//    for (int x =0; x<5; x++){
//    	printf("hello\n");
//	}
	
//	while (x<5){
//		printf("Hello\n");
//		x++;
//	}

//    int i=0;
//    while(i<3)
//    i++;
//    printf("In while loop\n %d",i);

//    int i=0;
//    while(++i)
//    {
//    	printf("H");
//	}
//	
//	int i=0;
//    while(i++)
//    {
//    	printf("H");
//	}
//	
//	int n;
//	for(n=10; n>0; n=n-1){
//		printf("%d\n",n);
//	}

//  int n,i,sum=0;
//  printf("enter the value");
//  scanf("%d",&n);
//  for (i=1;i<=n;i++)
//  {
//  	sum=sum+i;
//  }
//  printf("the sum=%d",sum);

//    int n=45;
//    printf("%d",45/10);

//    int no,sum=0,n;
//    printf("enter the no");
//	scanf("%d",&no);
//	while(no!=0)
//	{
//		n=no%10;
//		sum=sum+n;
//		no=no/10;
//	  }  
//	  printf("the sum of the digits is:%d",sum);

    //                       palindromme  and magical number
//    int i;
//    for (i=1;i!=10;i+=2)
//    printf("Hello");
    
//    int i;
////    for(i=1;i<10;i++)
//    for(i=1;i<10;i++); 
//    printf("%d",i);

//                                // Tables
//    int i,j;
//    for (j=1;j<10;j++)
//	{
// 	for(i=1;i<=10;i++){
//    printf("%d*%d=%d\n\n",j,i,i*j);
//	}	
//	}

//    int i,j;
//    for (i=1;i<21;i++)
//	{
//	for(j=1;j<=10;j++){
//    printf("%d*%d=%d\n",i,j,i*j);
//	}	
//	printf("\n");
//	}

//                                         DOUBT
//int main(){
//	for (int a=0;a<=10;a++){
//	printf("huhuh");
//}

//}

//    int n=10;
//    do{
//    	printf("%d\n",n);
//    	n=n-1;
//	}while(n>0);

//    do 
//    printf("in while loop\n");
//    while(0);
//    printf("after the loop\n");

//  int i=0;
//  do{
//  	i++;
//  	printf("in while loop\n");
//  }while(i<3);
  
//  int x=10;
//  char y='a';
//  x=x+y;
//  float z=x+1.0;
//  printf("x=%d z=%f\n",x,z);

//    double x=1.2;
//    int sum=(int)x+1;
//    printf("sum=%d",sum);

//    double x=1.2;
//    int sum=(int)x+1;
//    printf("sum=%f",sum);


//    double x=1.224325;
//    float y=3.34;
//    int z=3;
//    char c='A';
// //    printf("%f",x+y+z+c);
//    printf("%lf",x+y+z+c);

  
//    int x;
//    printf("enter  a number: ");
//    scanf("%d",&x);
//    if (x%2==0)
//    goto even;
//    else
//    goto odd;
//    even:
//    	printf("%d is even",x);
//    	return;
//    odd:
//    	printf("%d is odd",x);

//    int a=2334;
//    printf("*%5d* *%-5d*",a,a);
    
//    float b=1234.23454;
//    printf("*%3.3f*",b);
 
// char ch;
// printf("enter a character: ");
// scanf("%c",&ch);
// putchar(ch); 

//char ch='A';
//ch=getchar();
//putchar(ch);
//return;

//printf("Enter two alphabets ");
////getchar();
//getche();
//getch();

//char ch[30];
//printf("Enter the string: ");
//gets(ch);
//printf("entered string is: %s",ch);

//char s[100];
//gets(s);
//printf("hello world \n");
//printf("%s",s);

//char cc[23];
//printf("enter the string: ");
//gets(cc);
//puts(cc);

//int a,i,flag=1;
//printf("no: ");
//scanf("%d",&a);
//for (i=2;i<a;i++){
//	if (a%2==0){
//		flag=0;
//	}
//	if (flag){
//		printf("%d is a prime no.",a);
//	}
//	else {
//	printf("asdff");
//	}
//}


//char operation;
//float num1,num2,result;
//do
//{
//	printf("enter the operation(+,-,%,/,* or 'q' to quit)");
//    scanf("%c",&operation);
//	switch(operation)
//	{
//	case'+':
//	    printf("enter two numbers:");
//		scanf("%f%f",&num1,&num2);
//		result=num1+num2;
//		printf("result is :%f",result);
//		break;
//	case'-':
//		printf("enter two numbers:");
//		scanf("%f%f",&num1,&num2);
//		result=num1-num2;
//		printf("result is :%f",result);
//		break;
//	case'*':
//		printf("enter two numbers:");
//		scanf("%f%f",&num1,&num2);
//		result=(num1*num2);
//		printf("result is :%f",result);
//		break;
//	case '/':
//		printf("enter two numbers:");
//		scanf("%f%f",&num1,&num2);
//		result=num1/num2;
//		printf("result is :%f",result);
//		break;
//	case's':
//		printf("exiting the program...");
//		break;
//	default:
//		printf("invalid operation\n");
//		break;
//    }
//}while(operation!=0);

//int sqr(int y)
//{ return y*y }
//int main(){...}
//int x=1;
//for(x=1;x<10;x++)
//{
//	printf("%d\n",sqr(x));
//}


//25 feb
//double x=97.2;
//char sum=(char)x+1;
//printf("sum= %c",sum);


//show();
//printf("hello");
//{
//	void show(){
//		printf("world");
//	}
//}
//show();
//printf("hello");
////	return 0;
////}
////void show()
////{
////	printf("world");
////    main();
////}

// //int swap(int x,int y);  // formal arguments
//  int main{
//	int a=5;
//	int b=6;
//	swap(a,b); //actual arguments
//	printf("a=%d and b=%d\n",a,b);
//	return 0;
//}
//int swap(int x,int y)
//{
//	int temp=x;
//	x=y;
//	y=temp;
//	printf("x=%d and y=%d\n",x,y);
//}


//#include<stdio.h>
//void sum(){
//	int a,b;
//	printf("enter the value:");
//	scanf("%d %d",&a,&b);
//	printf("%d",a+b);
//	
//	
//	
//}
//void main(){
//	sum();
//}
//write a user define number to factors is given number
//void sum(){
//	int a,b;
//	printf("enter the value:");
//	scanf("%d %d",&a,&b);
//	printf("%d",a+b);
//	
//	
//	
//}
//void main(){
//	sum();
//}



//#include <stdio.h>
//int main() {
//	int a,i;
//	printf("enter a num:");
//	scanf("%d",&a);
//	printf("even num of %d is:",i);
//	for (i=0; i<=a; ++i){
//		if (a/2==0){
//			printf("%d",i);
//		}
//	}
//
//    return 0;
//}

//2nd march
//int a=23,b=234;
//add(a,b);

//int a=5;
//int *b;
//b=&a;
//printf("%d\n%d\n%d\n%d\n%d",a,&a,b,&b,*b);

//pointer are the variables which will hold the address of the variable
//int x=5,y=7;
//printf("%d %d\n",x,y);
//swap(&x,&y);//actual arguments
//printf("%d %d\n",x,y);
//    return0;
//}
//int swap(int *a,int *b){//formal argument
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//	printf("%d %d\n",*a,*b);
//}

//int a=5;
//fn1(a);
//printf("%d",a);
//void main(){
//
//int a;
//a=show();
//printf("%d",a);
//
//	return 0;
//}
//int show (){
//	return 15.5;
//	return 35;
//}

//int n,res;
//printf("enter the value of n: ");
//scanf("%d",&n);
//res=fact(n);
//printf("%d",res);
//    return 0;
//}
//int fact(int x){
//	if (x==0)
//	return 1;
//	else 
//	return (x)*fact(x-1);
//}
//    return 0;
//}

//int n,res;
//printf("enter the number of terms for which  ");
//scanf("%d",&n);
//res=fibo(n);
//printf("%d",res);
//    retrun 0;
//}
//int fibo(int x)
//{
//	if (x==0||x==1)
//	return x;
//	else {
//		printf()
//	}
//}


// FABOMICCI SERIES
//int n,result,i;
//printf("enter number");
//scanf("%d",&n);
//for(i=0;i<n;i++)
//{
//	result=fibo(i);
//	printf("%d",result);
//}
//    return 0;
//}
//int fibo(int x)
//{
//	if(x==0||x==1)
//	    return x;
//	else
//	    return fibo(x-1)+fibo(x-2);
//}



// PRACTICE
//int x=-23,y=25,z=5.3;
////printf("%d",x/2);
////printf("%d",x%2);
////printf("%d %d",y/-2,y%-2);
//int f=5.3 % 2;
//printf("%d",f);

//int x=20;
//double y=5.6;
//int c;
//c=x+y;
//printf("%d",c);

//int x=1,y=1,z;
//z=x++ + y;
//printf("%d %d %d",x,y,z);

//int z,a=1,b=2;
//z=a++ + ++b;
//printf("%d %d %d",z,a,b);

//int x=4,y,z;
//y=--x;
//z=x--;
//printf("%d %d %d",x,y,z);

//int x=10,y=5,z=5,a;
////a=y+z==x;
////a=x&&y;
//printf("%d",a);

//int a=10,b=0,c=2,d;
//d= a&&b || c-2;
//printf("%d",d);

//int a=3;
//int b=a<<2;
//int c=b>>2;
//printf("%d",b);

//int a,b;
//a=6;
//b=4;
//printf("%d %d",a^b,a|b);

//DOUBT
//int a=10;
//printf("%d",a=~a);

//double b=5%3&4+5*6;
//printf("%lf",b);

//double b=3&&5&4%3;
//printf("%lf",b);

//printf("%f",3&&5);

//double b=5&3&&4||5|6;
//printf("%lf",b);

//int b=5+7*4-9*(3,2);
//printf("%d",b);

//int b=4*6+3*4<3?4:3;
//printf("%d",b);

//int x=5;
//if(x<1)
//printf("hello");
//if(x==5)
//printf("hii");
//else
//printf("no");

//int x=0;
//if(x==0)
//printf("hii");
//else 
//printf("how are uh");
//printf("hello");

//int x=1;
//if(x>0)
//printf("inside if \n");
//else if(x>0)
//printf("inside else if \n"); 

//int x=0;
//if(x==1)
//if(x==0)
//printf("inside if \n");
//else
//printf("inside else if \n");
//else
//printf("inside else \n");

//int ch;
//printf("enter a value between 1 to 2:");
//scanf("%d",&ch);
//switch(ch)
//{
//	case 1:
//		printf("1");
//		break;
//	case 2:
//		printf("2");
//		break;
//	default:
//		printf("3");
//		break;
//}

//int ch;
//printf("enter a value between 1 to 2");
//scanf("%d",&ch);
//switch(ch)
//{
//	case 1:
//	printf("1");
//	printf("hi");
//	break;
//	default:
//		printf("2\n");
//}


//int a=-1,b=4,c=1,d,e;
//d=++a && ++b||++c;
//printf("%d %d %d %d",a,b,c,d);
//e=b++;
//printf("%d",b);

//int i=0;
//while(++i)
//{
//	printf("in the loop \n");
//}


//int i;
//for (i=0;i<5;i++){
//	int i=10;
//	printf("%d",i);
//	i++;
////}
//printf("%d",~6);
//
//int a=500,b=100,c;
//printf("%d",!a);
//if(!a>=400)
//b=300;
//c=200;
//printf("b= %d c=%d",b,c);

//int a=1,b=1,d=1;
//printf("%d %d %d",++a + ++a + a++,a++ + ++b,++d + d++ + a++);

//int a=23;
//int b=-2;
//printf("%d",a%b);


//int n,res;
//printf("enter the value of n: ");
//scanf("%d",&n);
//res=fact(n);
//printf("%d",res);
//    return 0;
//}
//int fact(int x){
//	if (x==0)
//	return 1;
//	else 
//	return (x)*fact(x-1);
//}


//3rd MARCH
//    float x = 2.56;
//    float y = 3.14;
//    float a = pow(x, y);
//    float b = fmod(x, y);
//    float c = logl(x);
//    float d = log10(y);
//    float e = exp(x);
//    
//    printf("%f", a);
//    printf("%f", b);
//    printf("%f", c);
//    printf("%f", d);
//    printf("%f", e);

//    double n,output;
//    printf("Enter a number\n");
//    scanf("%lf", &n);
//    output = sqrt(n);
//    printf("Square root of %.2lf = %f", n,output);

// int n=4;
// if (n>0)
// goto a;
// a:
// 	printf("%d",n);
// 	n=n-1;


////9th MARCH

//staticfun();
//	staticfun();

//gint++;
//staticfun();
//gint++;
//staticfun();


//int i=0,j=0;
//while(i<5,i<10)
//{
//	i++;
//	j++;
//}
//printf("%d %d\n",i,j);

//int i =0;
//for (i++;i==1;i=2)
//printf("in for loop\n");
//printf("after loop \n");

//static int i=5;
//if(--i){
//	main();
//	printf("%d \n",i);
//}

//int x=10;
//static int y=x;  // ERROR (STATIC ELEMENT CANNOT BE EQUATED WITH NON STATIC ELEMENT)v
//if (x==y)
//printf("equal");
//else if(x>y)
//printf("greater");
//else
//printf("less");

//int k=f(1);
//printf("%d",k);

//int i;
//printf("enter the no.");
//scanf("%d",&i);
//if (i%4==0){
//	printf("%d is divisible by 4",i);
//} else {
//printf("%d is not divisible by 4");
//}


////10TH MARCH
////PATTERN PRINTING
//int rows,i,j,space,num;
//printf("enter the no. of rows: ");
//scanf("%d",&rows);
//for(i=0;i<=rows;i++)
//{
//	num=1;
//	space=rows-i;
//	for(j=1;j<=space;j++){
//		printf(" ");
//	}
//	for (j=1;j<=i;j++){
//		printf("%d",num);
//		num++;
//	}
//	num-=2;
//	for (j=1;j<i;j++){
//		printf("%d",num);
//		num--;
//	}
//	printf("\n");
//}

//if(!printf("hello"))
//printf("hello");
//else 
//printf("world");

//printf("%d",printf("hello"));
//int a=printf("Hello")

//static int i=5;
//if(--i){
//	main();
//	printf("%d",i);
//}

////Find real root of the quadratic equation
//int i,n,a,b,c,root1,root2,discriminant;
//printf("enter the coefficient of the x^2 in the quadrtic equation: ");
//scanf("%d",&a);
//printf("enter the coefficient of the x in the quadrtic equation: ");
//scanf("%d",&b);
//printf("enter the linear coefficient of the quadrtic equation: ");
//scanf("%d",&c);
//printf("The equation formed as : %dx^2 + %dx + %d",a,b,c);
//discriminant=(pow(b,2) - 4*a*c);
//root1=(-b+sqrt(discriminant))/2;
//root2=(-b-sqrt(discriminant))/2;
//printf("\n the root1 is %d",root1);
//printf("\n the root2 is %d",root2);

//int a=1;
//printf("%d %d %d %d %d \n",a++,a++,a++,a++,a++);
//a=1;
//printf("%d %d %d %d %d \n",a++,a++,a++,++a,a++);
//a=1;
//printf("%d %d %d %d %d \n",a++,a++,++a,++a,a++);
//a=1;
//printf("%d %d %d %d %d \n",a++,++a,++a,++a,a++);

//int d;
//d=pow(3,2);
//printf("%d",d);

//nothing
////MARCH 23RD
//int a[100],i,n;
//printf("enter the array size: ");
//scanf("%d",&n);
//for (i=0;i<n;i++)
//{
//	printf("enter all %d elements",n);
//	scanf("%d",&a[i]);
//}
//for(i=0;i<n;i++)
//{
//	printf("%d\n",a[i]);
//}

//int a[5]={};
//printf("%d",a[1]);

//// SUM OF ELEMENTS OF ARRAY...
//  int a[100],n,sum=0,i;
//  printf("enter number of elements : ");
//  scanf("%d",&n);
//  printf("\nEnter array elements: ");
//  for(i=0;i<n;i++)
//  {
//  	scanf("%d",&a[i]);
//  }
//  for(i=0;i<n;i++){
//  	sum=sum+a[i];
//  }
//  printf("\n  sum of array elements is %d",sum);
  
//TO FIND OUT THE MIN AND MAX ELEMENT FROM THE ARRAY ...
//int a[100],i,n,min,max;
//printf("enter the no of elements: ");
//scanf("%d",&n);
//for(i=0;i<n;i++)
//{
//	printf("enter the elements: ");
//	scanf("%d",&a[i]);
//	min=a[0];
//	max=a[0];
//}
//for(i=1;i<n;i++)
//{
//	if(a[i]<min)
//{
//	min=a[i];
//}
//}printf("%d is min",min);

//int a[5],i;
//for(i=0;i<5;i++){
//	a[i]=i;
//}
//printf("%d",a[2]);

//int a[5]={1,2,3,4,5};
//int b[5];
//int i;
//for(i=0;i<5;i++)
//{
//	b[i]=++a[i];
//}
//printf("%d",b[0]+b[3]);


//int a[5]={5,1,15,20,25};
//int i=2;
//printf("%d",a[++i]);

//int a[5]={5,1,15,20,25};
//int i,j,m;
//i=++a[1];
//j=a[1]++;
//m=a[i++];
//printf("%d%d%d",i,j,m);

//MARCH 24TH 
//int a[3][3],i,j;
////for loop for the row...
//for(i=0;i<3;i++)
//{
//	// for loop for the column...
//	for(j=0;j<3;j++)
//	{
//		printf("enter the value of a[%d] [%d]:\n ",i,j);
//		scanf("%d %d",&a[i],&a[j]);
////		printf("%d \n",a[i][j]);
//	}
//}

//int a[3][2]={{1,2},{3,4},{5,6}};
//printf("%d",a[1][1]*a[2][1]);

//int a[2][3]={1,2,3,4,5};
//int i=0,j=0;
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//printf("%d",a[i][j]);
//DOUBT
//int a1[2][2];
//int a2[2][2];
//int a3[2][2],i=0,j=0;
//for(i=0;i<3;i++)
//{
//	for(j=0;j<3;j++)
//	{
//		printf("enter the a1[%d][%d]\n",i,j);
//		scanf("%d %d",&a1[i][j]);
//		printf("enter a2[%d][%d]\n",i,j);
//		scanf("%d %d",&a2[i][j]);
//		a3[i][j]=a1[i][j]+a2[i][j];
//		printf("%d\t",a3[i][j]);
//	}
//}

//doubt
//int a[10][10],transpose[10][10],rc,i,j;
//printf("Enter the rows and columns of matrix: ");
//scanf("%d %d %d",&r,&c);
////storing elements of the matrix 
//printf("\n Enter elements of matrix;\n");
//for(i=0;i<r;i++)
//{
//	for(j=0;j<c;j++)
//	{
//		printf("Enter element a&d &d: ",i,j);
//		scanf("%d",&a[i][j]);
//	}
//}
////Displaying the matrix a[][]
//printf("")

//doubt
//int a[10][10],sum=0;
//int i,j,m,n;
//printf("enter number of rows and columns: ");
//scanf("%d %d ",&m,&n);
//printf("Enter Elements: ");
//for(i=0;i<m;i++)
//{
//	for(j=0;j<n;j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//for(i=0;i<m;i++)
//{
//	for(j=0;j<n;j++)
//	{
//		if(i==j)
//		{
//			sum=sum+a[i][j];
//		}
//	}
//}
//printf("sum of diagonal elements= %d",sum);


//int 
//printf("Enter rows and columns for first matrix: ");
//scanf("%d %d",&r1,&c1);
//printf("enter rows and columns for second matrix: ");
//scanf("%d %d",&r2,&c2);
//while(c1!=r2)
//{
//	printf("error! no. of columns of first matrix not equal to no. of row of second\n\n");
//}

////30th MARCH
//int arr[100],n;
//int i;
//printf("\nenter n: ");
//scanf("%d",&n);
//printf("Enter array elements: ");
//for(i=0;i<n;i++)
//{
//	scanf("%d",&arr[i]);
//}
//printf("Elements by reference: ");
//reference(arr,n);
//for(i=0;i<n;i++)
//{
//	printf("\n%d ",arr[i]);
//}

//int arr[100],n;
//int i;
//printf("\n enter n: ");
//scanf("%d",&n);
//printf("enter the array elements: ");
//for(i=0;i<n;i++)
//{
//	scanf("%d\n",&arr[i]);
//}
//	printf("passing elements by value: ");
//	for(i=0;i<n;i++)
//	{
//		value(arr[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("\n%d",arr[i]);
//	}
	
	
//	int a[100],i,n,position,value;
//	printf("enter no of element: ");
//	scanf("%d\n",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("\n%d",&a[i]);
//	}
//	printf("enter the position where data has to be stored...");
//	scanf("%d\n",&position);
//	printf("Enter the value of inserted data");
//	scanf("%d\n",&value);
//	a[position-1]=value;
//	for(i=n-1;i<=position;i--)
//	{
//		a[i+1]=a[i];
//	}
//	for(i=0;i<n;i++)
//	{
//			printf("\n%d ",a[i]);
//	}
	
	
//	int array[100],position,c,n;
//	printf("Enter number of elements in array\n");
//	scanf("%d",&n);
//	printf("Enter %d elements \n",n);
//	for(c=0;c<n;c++)
//	{
//		scanf("%d",&array[c]);
//	}
//	printf("Enter the location where you wish to delte an element: \n");
//	scanf("%d",&position);
//	for(c=position;c<n;c++)
//	{
//		array[c]=array[c+1];
//	}
//	printf("resultant array is \n");
//	for(c=0;c<n-1;c++)
//	{
//		printf("%d\n",array[c]);
//	}
	
//	int a[100];
//	int hold,i,n,j;
//	printf("Enter value of n: ");
//	scanf("%d",&n);
//	printf("\n Enter elemenrs: ");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("Data items in original order");
//	for(i=0;i<n;i++)
//	{
//		printf("\n%d",a[i]);
//	}
//	for(i=0;i<n-1;i++)
//	{
//		for(j=0;j<n-1;j++)
//		{
//			if (a[j]>a[j+1])
//			{
//				hold=a[j];
//				a[j]=a[j=1];
//				a[j+1]=hold;
//			}
//		}
//	}
//	printf("\nData items in ascending order");
//	for(i=0;i<n;i++)
//	{
//		printf("\n%d",a[i]);
//		}	
	
	//31st march
//   int a[100];
//   int hold,i,j,n;
//   printf("\n Enter value of n:");
//   scanf("%d",&n);
//   printf("\n Enter elements:");
//   for(i=0;i<n;i++)
//   {
//   	scanf("%d",&a[i]);
//   }
//   printf( "Data items in original order" );
//   for (i=0;i<n;i++ )
//   {
//      printf("%d ",a[i]);//Elements will come with space
//   } // end for
//   // bubble sort
//// loop to control number of passes(no. of passes are always n-1)
//   for (i=0;i<n-1;i++)
//   {
//    // loop to control number of comparisons per pass(There is one comparison less)
// 
//	  for (j=0;j<n-i-1;j++)
//	   {
//         // compare adjacent elements and swap them if first
//         // element is greater than second element
//         if (a[j]>a[j+1])
//		 {
//            hold=a[j];
//            a[j]=a[j+1];
//            a[j+1]=hold;
//         } // end if
//      } // end inner for
//   } // end outer for
//   printf( "\nData items in ascending order" );
//   for (i=0;i<n;i++)
//   {
//      printf("%d ",a[i]);
//   } // end for

////Linear search
//int a[50];
//int i,loc=-1,key,n;
//printf("\nEnter the value of n: ");
//scanf("%d",&n);
//printf("\nEnter the elements: ");
//for(i=0;i<n;i++)
//{
//	scanf("%d",&a[i]);
//}
//printf("Enter integer value to search in array: ");
//scanf("%d",&key);
////attempt to locate searchkey in array a
//for(i=0;i<n;i++)
//{
//	if(a[i]==key)
//	{
//	loc=i;//location of key is stored
//	break;
//}
//}
//if(loc!=-1)
//{
//	printf("Element found at %d ",loc);
//}
//else
//{
//	printf("Element not found");
//}

//Bilenear search
//int a[50],n,loc=-1,key,beg,last,mid,i;
//printf("\n Enter number of array elements: ");
//scanf("%d",&n);
//printf("\n Enter array elements: ");
//for(i=0;i<n;i++)
//{
//	scanf("%d",&a[i]);
//}
//beg=0;
//last=n-1;
//printf("Enter integer value to search in sorted array: ");
//scanf("%d",&key);
//while(beg<=last)//loop will run until unless only one elements is not remaining
//{
//	mid=(beg+last);//determine index of middle element
//	if(a[mid]==key)
//	{
//		loc=mid;
//		break;
//	}
//	else if(a[mid]>key)//middle element is greatest than key
//	{
//		last=mid-1;//if middle element is greater than key,we need to search left subarray
//	}
//	else if(a[mid]<key)//middle element is less than key 
//	{
//		beg=mid+1;//middle element is less than key , we need to search right subarray
//	}
//}
//if (loc!=-1)
//{
//	printf("element found at %d",loc+1);//location is exact position,not index
//}
//else
//{
//	printf("element not found");
//}

//struct car mycar;//define struct variable
//mycar.name="Renault";
//mycar.price=500000;
//mycar.seats=2;
//printf("%s %f %d \n",mycar.name,mycar.price,mycar.seats);

//struct car mycar;
//printf("Enter name of car: \n");
//gets(mycar.name);
//printf("Enter number of seats in car: \n");
//scanf("%d",&mycar.seats);
//printf("Enter price of car: \n");
//scanf("%f",&mycar.price);
//printf("\n Particulaars of car are: \n");
//printf("Car name:%s",mycar.name);
//printf("\nNumber of seats: %d",mycar.seats);
//printf("\nPrice:%f",mycar.price);

int i;
struct car mycar[100];
for(i=0;i<100;i++){
	printf("\n \n  Enter data for car[%d]:\n",i);
	scanf("%s %d %f",&mycar[i].name,&mycar[i].seats,&mycar[i].price);
}
for(i=0;i<100;i++)
{
	printf("\n Data about your car[%d] is: %s %d %f",i,mycar[i].name,mycar[i].seats,mycar[i].price);
}
	return 0;
}

////1478
//void value(int u){
//	printf("%d",++u);
//}

////1457
//void reference(int arr[],int size)
//{
//	int i;
//	for(i=0;i<size;i++){
//		printf("%d",arr[i]++);
//	}
//}

//void f1(int a,int b)
//{
//	int c;
//	c=a; a=b; b=c;
//}
//void f2(int *a,int *b)
//{
//	int c;
//	c=
//}
