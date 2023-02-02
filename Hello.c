#include<stdio.h>

int main(){
	// Different types of Variables 
	
	int number=25;  // Integer type 
	printf("number : %d \n ",number);

	float pi=3.14;  // Float type
	char star="*";  // Character type 
	int age=22;
	age=24;       //to change the value of the variables. 
	
	int b=88;
	int B=89; // Variables are case sensitive.
	
	int _age=24; // Variables should always start with any alphabets or '_'.
	int final_price=100; // No Spaces or comma ',' between the variables only '_' can be used.

	
// Constants :- Variables which are fixed
	
	printf("pi : %f \n ",pi);    // ( %f ) is a format specifier used  to print the Real number case output 
	printf("star : %c \n",star);  //( %c ) is a format specifier used  to print the Character  case output 
	printf(" age : %d \n",_age);   //( %d ) is a format specifier used  to print the integer  case output 
	printf("b : %d \n",b); 
	printf("B : %d \n",B);
	printf("final price : %d",final_price);
	
	// To take input from the user a special function is used " scanf() "
	int num;
	printf("enter ur num : ");
	scanf("%d",&num);
	printf("number is : %d",num*3);
	
	return 0;
}
