#include<stdio.h>
#include<stdlib.h>
void main(){
	int ch;
	char fake;
	do{
		printf("\tStudent Menu\n");
		printf("1: Add student\n2: Display student\n3: Search student\n4: Exit\n");
		printf("Enter choice: \n");
		fflush(stdin);
		scanf("%d",&ch);
		switch(ch){
		case 1:
   		system("InsertStuRecord.exe");
   		break;
   		case 2:
   		system("DisplayStuRecord.exe");
   		break;
   		case 3:
   		system("SearchStudentRecord.exe");
   		break;
		case 4:
	    printf("Good Bye & stay happy\n");
	    break;
	default:
	    printf("Wrong Option\n");    
   }
   printf("\n\n\t\tPress any key to continue...\n");
   fflush(stdin);
   scanf("%c",&fake);
   system("cls");
  } while(ch!=4);
}
