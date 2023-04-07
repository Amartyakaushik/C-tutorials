#include <stdio.h>
int main(){
	int account;
	char name[30];
	double balance;
FILE *cfptr;
////if((cfptr=fopen("client.dat","w"))==NULL)
////{
////	printf("file could not be opened\n");
////}
////else{
////	printf("Enter the account,name,and balance: \n");
////	printf("Enter EOF to end input.\n");
////	printf(" ? ");
////	scanf("%d %s %lf",&account,&name,&balance);
////	while(!feof(stdin))
////	{
////	fprintf(cfptr,"%d %s %.2f\n",account,name,balance);
////	printf(" ? ");
////	scanf("%d%s%lf",&account,&name,&balance);
////	}
////	fclose(cfptr);
////	}
//if((cfptr=fopen("client.dat","r"))==NULL)
//{
//	printf("file could not be opened\n");
//}
//else{
//	while(!feof(cfptr))
//	{
//		fscanf(cfptr,"%d%s%lf",&account,&name,&balance);
//		printf("%d%s%lf\n",account,name,balance);
//		fclose(cfptr);
//	}
//}
FILE* fp;
if((fp=fopen("client.dat","r"))==NULL)
{
	printf("Error opening the file");
}
int num;
char content[100];
double dbl;
while(fscanf(fp,"%d%s%lf",&num,&content,&dbl)!\n)
{
	printf("%d %s %lf",num,content,dbl);
	printf("%d %s %lf",num,content,dbl);
	printf("%d %s %lf",num,content,dbl);
}
fclose(fp);
}

