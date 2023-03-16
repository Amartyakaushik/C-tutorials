#include<stdio.h>
#include<math.h>
//int fact(int x);

//481
//int isprime(int n){
//	if(n<=1){
//		return 0;
//	}
//	for (int i=2;i*i<=n;i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return 1;
//}
//int ispallindrome(int n){
//	int rev=0,temp=n;
//	while(temp>0){
//		rev=rev*10 + temp%10;
//		temp/=10;
//	}
//	return n==rev;
//}

////521
//void namaste(){
//	printf("Namaste\n");
//}
//void bonjour(){
//	printf("Bonjour\n");
//}

////533
//int sum(int a,int b){
//	printf("the sum of %d and %d is : %d",a,b,a+b);
//}

////541
//int table(int n){
//	int i;
//	for(i=1;i<=10;i++){
//		printf("%d * %d = %d\n",i,n,i*n);
//
//	}
//}

////547
//int square(int i){
//	int j=pow(i,2);
//	printf("square of %d is %d",i,j);
//}

////553
//int sum(int n);

////571
//int fact(int n);

////573
//int percentage(int s,int m,int e);

////604
//void show(){
//	printf("World");
//	main();
//}

//608
int f(int n);

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
//printf("yes %d is a armstrong no.",arm);	
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

//1st march
//char ch;
//printf("enter a character: ");
//scanf("%c",&ch);
//if (ch>='A' && ch<='Z'){
//	printf("upper case\n");
//}
//else if(ch>='a' && ch<='z'){
//	printf("lower case\n");
//}
//else{
//	printf("invalid character");
//}

//int a=5;
//fn1(a);
//printf("%d",a);

//int a,d;
//printf("enter the value of a: ");
//scanf("%d",&a);
//d=fact(a);
//printf("%d",d);
//    return 0;
//}
//int fact(int x){
//	int y;
//	y=x*fact(x-1);
//	return y;
//}
// //4TH MARCH
//int i;
//for(i=0;i<=10;i++)
//{
//	printf("%d\n",i);
//}

//int a=1,b=1,d=1;
//printf("%d, %d, %d",++a + ++a +a++,a++ + ++b,++d + d++ + a++);


//PRINT NO UPTO "N"...
//int n,i,j;
//printf("enter a no.: ");
//scanf("%d",&n);
//i=0;
//while(i<=n){
//	printf("%d \n",i);
//	i++;
//}
//
//for(j=0;j<=n;j++){
//	printf("%d \t",j);
//}
//
//do{
//	printf("%d \t",j);
//	j++;
//}while(j<=n);

//PRINT SUM OF FIRST N NATURAL NO.S...
//AND PRINT THE NO. IN REVERSE COUNT...
//int n,j,q,res=0,rev=0;
//printf("enter the value of n: ");
//scanf("%d",&n);
//for(j=n;j>=1;j--)
//{
//	res=res+j;
//	printf("%d\n",j);
//}
//printf("The sum is: %d",res);


//PRINT THE NO. IN IT'S REVERSE...
//if(n<100){
//	rev=(n%10)*10+(n/10);
//	printf("%d",rev);
//}  // NOT COMPLETED
//else if(n<1000){
//	for(n%10==0){
//		n=n%10;
//		q=n*100;
//		r=
//	}
//}

//rev=(n%10)*10+(n/10);
//printf("%d",rev);

//PRINT THE TABLE OF A NUMBER INPUT "N"...
//int n,table,i;
//printf("Enter the no.: ");
//scanf("%d",&n);
//for(i=1;i<=10;i++){
//	table=i*n;
//	printf(" %d * %d= %d \n",n,i,table);
//}

//BREAK STATEMENT
//TAKE NUMBER FROM USER UNTIL USER ENTERS AN ODD NO. ...
//int n;
//do{
//printf("enter the no.: ");
//scanf("%d",&n);
//if(n%2!=0){
//	printf("%d is an odd no.\n",n);
//	break;
//}
//	printf("%d is an even no.\n",n);
//}while(n%2==0);
//printf("Thankuu");

//TAKE NO. FROM USER UNTIL USER ENTERS NO. MULTIPLE OF 7...
//int n;
//do{
//	printf("enter the no. : ");
//	scanf("%d",&n);
////	printf("%d",n);
//	if(n%7==0){
//		printf("%d is divisble by 7\t",n);
//		break;
//	}
//}while(1);
//printf("Thankuu...");

//SKIP STATEMENT
//PRINT ALL NO.s BUT SKIP NO. DIVISIBLE BY 3...
//int n,i;
//printf("Enter the value of n: ");
//scanf("%d",&n);
//for(i=0;i<=n;i++){
//	if(i%3==0){
//		continue;
//	}
//	printf("%d\n",i);
//}

//PRINT ODD NO.s ONLY...
//int n,i;
//printf("enter the no.: ");
//scanf("%d",&n);
//for(i=5;i<=n;i++){
//	if(i%2==0){
//		continue;
//	}
//	printf("%d\n",i);
//}

//PRINT THE FACTORIAL OF NO.
//int n,fact=1,i;
//printf("enter the value of n: ");
//scanf("%d",&n);
//for(i=1;i<=n;i++){
//	fact=fact*i;
//}
//printf("The factorial of %d is: %d ",n,fact);


//PRINT REVERSE OF THE TABLE OF N...
//int n,rev,i;
//printf("enter the value of n: ");
//scanf("%d",&n);
//for(i=10;i>=1;i--){
//	rev=i*n;
//	printf("%d * %d = %d\n",i,n,rev);
//}


//CALCULATE THE SUM OF ALL NUMBERS BETWEEN 5 AND 50...
//int i,sum=0;
//for(i=5;i<=50;i++){
//	sum=sum+i;
//}
//printf("%d\n",sum);

//PATTERN PRINTING
//int i,j,rows,space,num;
//printf("enter the value of rows: ");
//scanf("%d",&rows);
//for(i=0;i<=rows;i++){
//	num=1;
//	space=rows-i;
//	for(j=1;j<=space;j++){
//		printf(" ");
//	}
//	for(j=1;j<=i;j++){
//		printf("%d",num);
//		num++;
//	}
//	num=num-2;
//	for(j=1;j<i;j++){
//		printf("%d",num);
//		num--;
//	}printf("\n");
//}


////WAP TO CHECK IF A NO. IS PRIME OR NOT
//int i,n;
//printf("enter a no: ");
//scanf("%d",&n);
//if (n==1){
//	printf("%d is a prime no.\n",n);
//}
//else if(n%2!=0 || n%3!=0){
//	printf("%d is a prime no.\n",n);
//}
//else {
//	printf("%d is not a prime no.\n",n);
//}
//printf("Thankuu...");


//DOUBT PATTERN 
//int i;
//char c='*';
//for(i=0;i<=5;i++){
//	printf("%d\n",c*5);
//}


////Complete the code to calculate the sum of the five digits on n.
//int n,sum=0;
//scanf("%d", &n);
//while(n){
//	sum=sum+n%10;
//	n=n/10;
//}
//    printf("%d",sum);

   
//int i,j,r,k,count=0;
//scanf("%d%d%d",&i,&r,&k);
//for(j=i;j<=r;j++){
//	if(j%k==0){
//	count+=1;
//}
//}printf("%d",count); 

////PRIME PALLINDROME 
//    int n;
//    scanf("%d", &n);
//
//    if (isPrime(n) && isPalindrome(n)) {
//        printf("YES");
//    }  else {
//        printf("NO");
//    }

//PRINT BONJOUR FOR FRENCH AND NAMASTE FOR INDIAN USERS...
//char ch;
//printf("enter i for Indian user and f for French user : ");
//scanf("%c",&ch);
//if(ch=='i'){
//	namaste();
//}else if(ch=='f'){
//	bonjour();
//}else {
//	printf("enter valid character...");
//}

//FIND SUM OF TWO NO. WITH THE HELP OF A FUN...
//int i,j;
//printf("enter i : ");
//scanf("%d",&i);
//printf("enter j : ");
//scanf("%d",&j);
//sum(i,j);

//PRINT TABLE OF A NO. ...
//int i;
//printf("enter a no.: ");
//scanf("%d",&i);
//table(i);

////PRINT SQUARE OF A NUM...
//int i;
//printf("enter a num: ");
//scanf("%d",&i);
//square(i);

//RECURSION
//PRINT SUM OF N NATURAL NUM...
//int n;
//printf("enter the num: ");
//scanf("%d",&n);
//sum(n);
////printf("the sum of first %d natural num's is: ",n,sum(n));

////FACTORIAL
//int i,res;
//printf("enter the num: ");
//scanf("%d",&i);
//res=fact(i);
//printf("%d",fact(i));

//FIND % OF MARKS OBTAINED...
//int sci,maths,eng;
//printf("enter your marks one by one...");
//scanf("%d \t%d\t %d\n",&sci,&maths,&eng);
//int per=percentage(sci,maths,eng);
//printf("Your over all % is %d\n",per);

//MARCH 16
//int x=10,y=0;
//float z=20;
////printf("%d",x!=y);
////printf("%d",~y);
//int k=sizeof(z);
//printf("%d",k);

//int i;
//for(i=0;i!=50;i+=2)
//printf("hello\n");

//show();
//printf("HELLO");

//int n=11;
//printf("%d",f(n));


//int i=0;
//while(i<3)
//	i++;
//	printf("in while loop \n");

//int x=10;
//static int y=x;
//if(x==y){
//printf("equal");
//}
//else if(x>y){
//	printf("greater");
//}
//else{
//	printf("Less");
//}

static int i=5;
if(--i){
	main();
	printf("%d",i);
}
    return 0;
}

////607
//int f(int n)
//{

//	if(n>0)
//	return (n+f(n-2));
//}

////563
//int sum(int n){
//	if (n==1){
//		 return 1;
//}
//	int sumNm1=sum(n-1);
//	int sumN=sumNm1+n;
//	printf("%d",sumN);	
//}

////571
//int fact(int n){
//	if(n==0 || n==1){
//		return 1;
//	}else {
//		return fact(n-1)*n;
//	}
//}

//573

//int percentage(int s,int m,int e){
//	int per=(s+m+e)/3;
//	printf("%d",per);
////	return per;
//}

