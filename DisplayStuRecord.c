#include<stdio.h>
typedef struct Student{
	int rollno;
	char name[30];
	int ph,c,m;
}STD;
void main(){
	int total;
	float per;
	char grade;
STD S;
FILE *p;
p=fopen("stu.ah","r");
if(p==NULL){
	printf("File not found");
}
else{
	printf("\n\n\n\t\tStudent Record\n");
	printf("\t--------------------------------------------------------\n");
	printf("\n\trollno\tname\tph\tc\tm\t total\tper\tgrade\n");
	printf("\t--------------------------------------------------------\n");
	while(!feof(p)){
		fread(&S,sizeof(S),1,p);
		if(feof(p)){
			break;
		}
		total=S.ph+S.c+S.m;
		per=total/3;
		if(per>90){
			grade='AA';	
		}
		else if (per>80){
			grade='A';
		}
		else{
			grade='B';
		}
		printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%.2f\t%c\t\n",S.rollno,S.name,S.ph,S.c,S.m,total,per,grade);
	}
}
fclose(p);	
}
