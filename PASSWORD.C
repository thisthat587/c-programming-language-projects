//This is the code for the password encryption of length four

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
	{
	int i;
	char password[10];
	clrscr();
	printf("Enter password: ");
	for(i=0;i<4;i++)
		{
		password[i]=getch();
		printf("*");
		}
	printf("\n");
	password[i]='\0';
	printf("%s",password);
	getch();
	}
