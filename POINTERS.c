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
//int main()
//{
//float items[3];
//printf("Price of 1st item: ");
//scanf("%f",&items[0]);
//
//printf("Price of 2nd item: ");
//scanf("%f",&items[1]);
//
//printf("Price of 3rd item: ");
//scanf("%f",&items[2]);
//
//printf("Total price of item1 is :%f",items[0]+(0.18*(items[0])));
//printf("Total price of item2 is :%f",items[1]+(0.18*(items[1])));
//printf("Total price of item3 is :%f",items[2]+(0.18*(items[2])));	
//	return 0;
//}

////REVERSE OF ARRAY
//void reverse(int arr[],int n);
//void printarr(int arr[],int n);
//int main(){
//int arr[]={2,44,12,234,34};
//reverse(arr,5);
//printarr(arr,5);
//	return 0;
//}
//void reverse(int arr[],int n){
//	int i;
//	for(i=0;i<n/2;i++){
//		int firstval=arr[i];
//	    int secval=arr[n-i-1];
//		arr[i]=secval;
//		arr[n-i-1]=firstval;
//	}
//}
//void printarr(int arr[],int n){
//	int i;
//	for(i=0;i<n;i++){
//		printf("%d\t",arr[i]);
//	}
//}


////fabonacii series with the help of array
//int main(){
//	int n;
//	int fib[n];
//	printf("enter  the no. of seris: ");
//	scanf("%d",&n);
//	int i;
////	for(i=0;i<n;i++){
////		printf("enter the values of fib[{}]: ",i);
////		scanf("%d\t",&fib[i]);
////	}
//	fib[0]=0;
//	fib[1]=1;
//	for (i=2;i<n;i++){
//		fib[i]=fib[i-1]+fib[i-2];
//		printf("%d\t",fib[i]);
//	}
//	printf("\n");
//	return 0;
//}

//2D ARRAY (TABLE OF 2 and 3)...
//void storetable(int arr[][10],int n,int m,int number);
//int main(){
//	int table[2][10];
//	storetable(table,0,10,2);
//	storetable(table,1,10,3);
//	
//	int i;
//	for(i=0;i<10;i++){
//		printf("%d\t",table[0][i]);
//	}
//	printf("\n");
//	for(i=0;i<10;i++){
//		
//		printf("%d\t",table[1][i]);
//	}
//	return 0;
//}
//void storetable(int arr[][10],int n,int m,int number){
//	int i;
//	for(i=0;i<m;i++){
//		arr[n][i]=number*(i+1);
//	}
//}

//int main(){
//	//linear search
//int num[50],loc=-1,n,i,key;
//printf("enter value of n: ");
//scanf("%d",&n);
//for(i=0;i<n;i++){
//	printf("enter the values of num: ");
//	scanf("%d",&num[i]);
//}
//printf("enter the num uh want to search: ");
//scanf("%d",&key);
//for(i=0;i<n;i++){
//	if(num[i]==key);
//	loc=i;
//}
//if(loc!=-1){
//	printf("the key value is found at %d",loc);
//}else{
//	printf("key value not found...");
//}
//	return 0;
//}

////BILENEATR SEARCH
//int main(){
//	int num[50],i,n,loc=-1,key,beg,mid,last;
//printf("\nEnter the no. of elements in array: ");
//scanf("%d",&n);
//for(i=0;i<n;i++){
//	printf("enter the values of elements of num: ");
//	scanf("%d",&num[i]);
//}
//printf("Enter the value to search: ");
//scanf("%d",&key);
//beg=0;
//last=n-1;
//while(beg<=last){
//	mid=beg+last;
//	if(num[mid]==key){
//	loc=mid;
//}
//else if(num[mid]>key){
//	last=mid-1;
//}
//else if(num[mid]<key){
//	beg=mid+1;
//}
//}
//if(loc!=-1){
//	printf("key value is found at %d",loc);
//}
//else{
//	printf("key value not found...");
//}
//	return 0;
//}

//int main(){
//
//int *pnum;
//char *pch;
//float *pfnum;
//double *pdnum;
//long *plnum;
//printf("\n Size of integer pointer = %d",sizeof(pnum));	
//printf("\n Size of character pointer = %d",sizeof(pch));	
//printf("\n Size of float pointer = %d",sizeof(pfnum));	
//printf("\n Size of double pointer = %d",sizeof(pdnum));	
//printf("\n Size of long pointer = %d",sizeof(plnum));	
//return 0;
//}


//int main()
//{
//	double radius,area=0.0;
//	double *pradius=&radius,*parea=&area;
//	printf("\nEnter the radius of the circle: ");
//	scanf("%lf",pradius);
//	*parea=3.14*(*pradius)*(*pradius);
//	printf("\nThe area of the circle with radius %.2lf+%.2lf",*pradius,*parea);
//	return 0;
//}

//NULL POINTER
//int main()
//{
//	int *ptr=NULL;
//	int a=10;
//	printf("%u",ptr);
//	printf("%d",*ptr);
//	ptr=&a;
//	printf("\n%d",*ptr);
//	return 0;
//}

////VOID POINTER
//int main()
//{
//	int x=10;
//	char ch='A';
//	void *gp;
//	gp=&x;
//	printf("\n The generic pointer points to the integer value=%d",*(int*)gp);
//	gp=&ch;
//	printf("\n The generic pointer points to the character value=%d",*(char*)gp);
//	return 0;
//}

//CONSTANT POINTER
int main(){
	int value1=21;
	int value=22;
	int * const ptr= &value;
	ptr = *value1;
	printf("%d",*ptr);
	
	return 0;
}
