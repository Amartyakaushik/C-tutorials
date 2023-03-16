//int callcount=0;
//void somefunction()
//{
//	callcount++;
////}

#include<stdio.h>
//void staticfun(){
//	static int i;
//	{
//		static int i=1;
//		printf("%d",i);
//		i++;
//	}
//	printf("%d\n",i);
//	i++;
//}
//int main(){
//	staticfun();
//	staticfun();
//	return 0;
//}

//static int gint =1;
//static void staticfun(){
//	static int i;
//	printf("%d",i);
//	i++;
//	printf("%d\n",gint);
//	gint++;
//}
//int main (){
//	gint++;
//	staticfun();
//	gint++;
//	staticfun();
//	return 0;
//}

int f(int n)
{
	static int i=1;
	if (n>=5)
	return n;
	n=n+i;
	i++;
	return f(n);
}
int main(){
	int k=f(1);
	printf("%d",k);
}
