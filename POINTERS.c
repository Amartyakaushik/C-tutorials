#include<stdio.h>
//void square(int n);
//void _square(int* n);
//
//int main()
//{	
//int number=5;
////CALL BY VALUE
//square(number);
//printf("%d\n",number);
//
////CALL BY REFRENCE
//_square(&number);
//printf("%d\n",number);
//	return 0;
//}
////CALL BY VALUE
//void square(int n)
//{
//	n=n*n;
//	printf("%d\n",n);
//}
////CALL BY REFRENCE
//void _square(int* n)
//{
//	*n=(*n)*(*n);
//	printf("%d\n",*n);
//}


//void swap(int x, int y);
//void _swap(int *x,int *y);
//int main()
//{
//int x=3,y=5;
//swap(x,y);
//printf("x=%d,y=%d\n",x,y);
//
//_swap(&x,&y);
//printf("x=%d,y=%d\n",x,y);
//	return 0;
//}
////call by value
//void swap(int x,int y)
//{
//	int t=x;
//	x=y;
//	y=t;
//	printf("x=%d,y=%d\n",x,y);
//}
////call by refrence
//void _swap(int* x,int* y)
//{
//	int t=*x;
//	*x=*y;
//	*y=t;
//}


//ARRAY
//int main()
//{
//int marks[3];
//printf("Enter marks of phy: ");
//scanf("%d",&marks[0]);
//
//printf("Enter marks of che: ");
//scanf("%d",&marks[1]);
//
//printf("Enter marks of mth: ");
//scanf("%d",&marks[2]);
//
//printf("marks of phy is %d,marks of che is %d,marks of mth is %d",marks[0],marks[1],marks[2]);
//	return 0;
//}

//WRITE A PROGRAM TO ENTER PRICE OF 3 ITEMS AND PRINT THEIR FINAL COST WITH GST...
int main()
{
float items[3];
printf("Price of 1st item: ");
scanf("%f",&items[0]);

printf("Price of 2nd item: ");
scanf("%f",&items[1]);

printf("Price of 3rd item: ");
scanf("%f",&items[2]);

printf("Total price of item1 is :%f",items[0]+(0.18*(items[0])));
printf("Total price of item2 is :%f",items[1]+(0.18*(items[1])));
printf("Total price of item3 is :%f",items[2]+(0.18*(items[2])));
	
	return 0;
}
