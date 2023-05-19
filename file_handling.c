#include <stdio.h>
// int main(){
// 	int account;
// 	char name[30];
// 	double balance;
// FILE *cfptr;
// if((cfptr=fopen("client.dat","w"))==NULL)
// {
// 	printf("file could not be opened\n");
// }
// else{
// 	printf("Enter the account,name,and balance: \n");
// 	printf("Enter EOF to end input.\n");
// 	printf(" ? ");
// 	scanf("%d %s %lf",&account,&name,&balance);
// 	while(!feof(stdin))
// 	{
// 	fprintf(cfptr,"%d %s %.2f\n",account,name,balance);
// 	printf(" ? ");
// 	scanf("%d%s%lf",&account,&name,&balance);
// 	}
// 	fclose(cfptr);
// 	}
// if((cfptr=fopen("client.dat","r"))==NULL)
// {
// 	printf("file could not be opened\n");
// }
// else{
// 	while(!feof(cfptr))
// 	{
// 		fscanf(cfptr,"%d%s%lf",&account,&name,&balance);
// 		printf("%d%s%lf\n",account,name,balance);
// 		fclose(cfptr);
// 	}
// }


// FILE* fp;
// if((fp=fopen("client.dat","r"))==NULL)
// {
// 	printf("Error opening the file");
// }
// int num;
// char content[100];
// double dbl;
// while(fscanf(fp,"%d%s%lf",&num,&content,&dbl)!\n)
// {
// 	printf("%d %s %lf",num,content,dbl);
// 	printf("%d %s %lf",num,content,dbl);
// 	printf("%d %s %lf",num,content,dbl);
// }
// fclose(fp);
// }


//19TH MAY
// int main(){
// 	//FILE POINTER
// 	// FILE *fptr;

// 	//TO OPEN A FILE TO READ/WRITE/UPDATE THE DATA...

// 	// fptr=fopen("file1.txt","r");
// 	// //TO CHECK IF THE FILE EXIST...
// 	// if(fptr== NULL){
// 	// 	printf("FIle doesn't exist");
// 	// } else {
// 	// 	fclose(fptr);
// 	// }
// 	// //TO CLOSE THE FILE...
// 	// // fclose(fptr);

//     // //TO OVERWRITE THE DATA IN THE FILE...
// 	// fptr=fopen("file1.txt","w");
// 	// fprintf(fptr,"%c",'A');
// 	// fprintf(fptr,"%c",'M');
// 	// fprintf(fptr,"%c",'A');
// 	// fprintf(fptr,"%c",'R');
// 	// fprintf(fptr,"%c",'T');
// 	// fprintf(fptr,"%c",'Y');
// 	// fprintf(fptr,"%c",'A');
// 	// fclose(fptr);

// 	// //TO READ THE DATA DIRECTLY FROM THE FILE...
// 	// fptr=fopen("file1.txt","r");
// 	// char ch;
// 	// fscanf(fptr,"%c",&ch);
// 	// printf("charater:%c\n",ch);
// 	// fscanf(fptr,"%c",&ch);
// 	// printf("charater:%c\n",ch);
// 	// fscanf(fptr,"%c",&ch);
// 	// printf("charater:%c\n",ch);
// 	// fscanf(fptr,"%c",&ch);
// 	// printf("charater:%c\n",ch);
// 	// fscanf(fptr,"%c",&ch);
// 	// printf("charater:%c\n",ch);
// 	// fscanf(fptr,"%c",&ch);
// 	// printf("charater:%c\n",ch);
// 	// fscanf(fptr,"%c",&ch);
// 	// printf("charater:%c\n",ch);
// 	// fclose(fptr);

// 	//USE OF FGET(READ THE DATA) AND FPUT(ADD SOME DATA)

// 	// fptr=fopen("file1.txt","a");
// 	// fputc('C',fptr);
// 	// fputc('H',fptr);
// 	// fputc('A',fptr);
// 	// fputc('R',fptr);
// 	// fputc('C',fptr);
// 	// fputc('H',fptr);
// 	// fputc('I',fptr);
// 	// fputc('L',fptr);
// 	// fclose(fptr);

// 	// fptr=fopen("file1.txt","r");
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c\n",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c",fgetc(fptr));
// 	// printf("%c\n",fgetc(fptr));
// 	// fclose(fptr);


//     // //EOF (TO READ THE FILE TILL THE END OF FILE...)
// 	// fptr=fopen("file1.txt","r");
// 	// char ch;
// 	// ch=fgetc(fptr);
// 	// while(ch!=EOF){
// 	// 	printf("%c",ch);
// 	// 	ch=getc(fptr);
// 	// }
// 	// printf("\n");
// 	// fclose(fptr);

// 	// //MAKE A PROGRAM TO READ 5 INTEGERS FROM A FILE
// 	// fptr=fopen("file1.txt","w");
// 	// fputc(1,fptr);
// 	// fputc(2,fptr);
// 	// fputc(3,fptr);
// 	// fputc(4,fptr);
// 	// fputc(5,fptr);
// 	// fclose(fptr);

// 	// fptr=fopen("file1.txt","r");
// 	// int n;
// 	// n=fgetc(fptr);
// 	// while(n!=EOF){
// 	// 	printf("%d\t",n);
// 	// 	n=fgetc(fptr);
// 	// }
// 	// printf("\n");
// 	// fclose(fptr);
// }

//WRITE A PROGRAM TO WRITE ALL THE ODD NUMBERS FROM 1 TO N IN A FILE.
int main(){
	FILE *sptr;

	// sptr=fopen("student.txt","w");
	// char name[20];
	// int roll;
	// float cgpa;
	// printf("Enter name:");
	// scanf("%s",name);
	// printf("Enter roll no:");
	// scanf("%d",&roll);
	// printf("Enter cgpa: ");
	// scanf("%f",&cgpa);

	// fprintf(sptr,"Name of the student:%s\n",name);
	// fprintf(sptr,"Rollno. of the student:%d\n",roll);
	// fprintf(sptr,"CGPA of the student:%f\n",cgpa);
	// fclose(sptr);

	//WRITE A PROGRAM TO PRINT ALL THE ODD NO'S BETWEEN 1 TO N.
	sptr=fopen("student.txt","a");
	int n,i;
	printf("Enter a value: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2!=0){
			fprintf(sptr,"%d\n",i);
		}
	}
	fclose(sptr);
}
