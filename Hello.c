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
    
	return 0;
}
