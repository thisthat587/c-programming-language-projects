/*program to find different types of characters in live through getch. */
#include<stdio.h>
#include<conio.h>
void main()
	{
	int i,vow=0,cons=0,lwrcase=0,uprcase=0,special=0,space=0,in=0,j=0;
	int num=0;
	char name[200]={"\0"};
	up:
	clrscr();
	vow=0;
	cons=0;
	special=0;
	lwrcase=0;
	uprcase=0;
	num=0;
	space=0;
	for(i=0;name[i]!='\0';i++)
		{
		if(name[i]=='A'||name[i]=='E'||name[i]=='I'|name[i]=='O'||name[i]=='U')
			{
			uprcase++;
			vow++;
			}
		else if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
			{
			lwrcase++;
			vow++;
			}

		else if(name[i]==32)
			{
			space++;
			}
		else if(name[i]>=65 && name[i]<=90)
			{
			uprcase++;
			cons++;
			}
		else if(name[i]>=97 && name[i]<=122)
			{
			lwrcase++;
			cons++;
			}
		else if(name[i]>=48 && name[i]<=57)
			{
			num++;
			}
		else if((name[i]>=32 && name[i]<=47) || (name[i]>=58 && name[i]<=64) ||
			(name[i]>=91 && name[i]<=96) || (name[i]>=123 && name[i]<=126))
			{
			special++;
			}
		}
	printf("To exit press Enter key...\n\n");
	printf("\nVowel:              %d",vow);
	printf("\nConsonant:          %d",cons);
	printf("\nLowercase:          %d",lwrcase);
	printf("\nUppercase:          %d",uprcase);
	printf("\nInteger:            %d",num);
	printf("\nSpecial characters: %d   (spaces are counted separately)",special);
	printf("\nSpace:  	    %d",space);
	printf("\nTotal characters:   %d",i);
	if(space>=1)
		{
		printf("\ntotal words:        %d",space);
		}
	else
		{
		printf("\ntotal words:        %d",space);
		}
	printf("\n\ntype here: %s",name);
	fflush(stdin);
	name[j]=getche();
	in=name[j];
	if(in==13)exit();
	else if(in==8)
		{
		if(j>0)
			{
			j--;
			name[j]='\0';
			}
		else
			{
			name[0]='\0';
			}
		goto up;
		}
	else
		{
		j++;
		name[j]='\0';
		goto up;
		}
	getch();
	}