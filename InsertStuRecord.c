#include<stdio.h>
typedef struct Student{
	int rollno;
	char name[30];
	int ph,c,m;
}STD;
void main(){
STD S;
char ch;
FILE *p;
p=fopen("stu.ah","r");
if(p==NULL){
	p=fopen("stu.ah","w");
}
else{
	p=fopen("stu.ah","a");
}
do{
	printf("Enter Rollno of student: ");
	fflush(stdin);
	scanf("%d",&S.rollno);
	printf("Enter name of student: ");
	fflush(stdin);
	gets(S.name);
	printf("Enter Physics,Chemistry,Maths Marks: ");
	fflush(stdin);
	scanf("%d%d%d",&S.ph,&S.c,&S.m);
	fwrite(&S,sizeof(S),1,p);
	printf("Student Submitteed Successfully....\n");
	printf("Want to add more students:(y/n)?");
	fflush(stdin);
	scanf("%c",&ch);
}while(ch=='y' || ch=='Y');
fclose(p);	
}
