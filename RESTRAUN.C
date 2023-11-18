#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<float.h>
//#include<dos.h>
void hyphen()
	{
	printf("\n");
	textcolor(WHITE);
	cprintf("|--------------------------|");
	return;
	}
void main()
	{
	time_t now;
	char menu[][100]={{" Tea          40.00"},{" Coffee       60.00"},{" Momos        120.0"},{" Burger       90.00"},{" Noodles      60.00"},{" Macroni      60.00"},{" Egg roll     80.00"},{" biryani      150.0"},{" Pastry       45.00"},{" Sandwich     40.00"}};
	float quan[10],dis,amount=0.0,t_item=0.0,t_amount=0.0;
	int i,w=0,j,m,in,r,a=0,n=6;
	char ch,name[25]={'\0'},mobile[13]={'\0'};
	float price[]={40.0,60.0,120.0,90.0,60.0,60.0,80.0,150.0,45.0,40.0};
	char rules[][100]={{"* up       -> w"},{"* down     -> s"},{"* select   -> SPACE"},{"* deselect -> d"},{"* bill     -> ENTER"},{"* exit     -> ESC"}};
	clrscr();
	for(i=0;i<=9;i++)
		{
		quan[i]=0.0;
		}
	up:
	clrscr();
	textcolor(WHITE);
	for(r=0,a=19;r<=5,a<=24;r++,a++)
		{
		gotoxy(1,a);
		textcolor(YELLOW);
		cprintf("%s",rules[r]);
		printf("\n");
		}
	textcolor(WHITE);
	gotoxy(1,1);
	printf("\033[0;33m\033[46m");
	printf("_________________________________CAFE & RETREAT_________________________________");
	printf("\033[0m");
	gotoxy(10,2);
	//printf("\033[0;35m");
	textcolor(YELLOW);
	cprintf(" MENU");
	textcolor(WHITE);
	gotoxy(1,3);
	cprintf("<-------------------------->");
	printf("\n");
	textcolor(YELLOW);
	//hyphen();
	//printf("\033[0;35m");
	gotoxy(1,4);
	cprintf("| Items         Rate(Rs.)  |");
	hyphen();
	printf("\n");
	textcolor(YELLOW);
	gotoxy(35,4);
	//printf("\033[0;35m");
	cprintf("Items        Rate      Quantity    Amount(Rs.)\n");
	for(i=0,j=6;i<=9,j<=15;i++,j++)
		{
		if(i==w)
			{
			printf("\033[0;34m\033[47m");
			//textcolor(BLUE);
			}
		else if(quan[i]>0)
			{
			printf("\033[0;32m");
			//textcolor(GREEN);
			}
		else
			{
			printf("\033[0;37m");
			//textcolor(WHITE);
			}
		gotoxy(1,j);
		if(i==9)
			{
			printf("|%d.%s    |",i+1,menu[i]);
			}
		else
			printf("| %d.%s    |",i+1,menu[i]);
		//cprintf("    %0.0f      |",quan[i]);
		printf("\n");
		for(m=2;m<=25;m++)
			{
			textcolor(BLUE);
			gotoxy(32,m);
			cprintf("|");
			}
		}
	j=6;
	t_item=0;
	t_amount=0;
	for(i=0;i<=9;i++)
		{
		textcolor(WHITE);
		if(quan[i]>0.0)
			{
			if(quan[i]>9)
				{
				gotoxy(35,j);
				cprintf("%s        %0.0f         %0.2f",menu[i],quan[i],price[i]*quan[i]);
				}
			else
				{
				gotoxy(35,j);
				cprintf("%s        %0.0f          %4.2f",menu[i],quan[i],price[i]*quan[i]);
				}
			j++;
			}
		t_item=t_item+quan[i];
		t_amount=t_amount+(price[i]*quan[i]);
		}
	printf("\033[0;35m");
	gotoxy(35,16);
	cprintf("--------------------------------------------\n");
	gotoxy(35,18);
	printf(" Total Items:                       %0.0f",t_item);
	gotoxy(35,20);
	printf(" Total Amount(Rs.):                 %0.2f",t_amount);
	textcolor(WHITE);
	printf("\033[0m");
	gotoxy(1,15);
	hyphen();
	fflush(stdin);
	ch=getch();
	in=ch;
	if(in==27)
		{
		exit();
		}
	if(ch=='s' || ch=='S')
		{
		if(w==9)
			{
			w=0;
			goto up;
			}
		w++;
		goto up;
		}
	else if(ch=='w' || ch=='W')
		{
		if(w==0)
			{
			w=9;
			goto up;
			}
		w--;
		goto up;
		}
	else if(in==32)
		{
		quan[w]=quan[w]+1.0;
		goto up;
		}
	else if(ch=='d' || ch=='D')
		{
		if(quan[w]==0.0)
			{
			quan[w]=0.0;
			goto up;
			}
		quan[w]=quan[w]-1.0;
		goto up;
		}

	else if(in==13)
		{
		i=0;
		name:
		clrscr();
		printf("To go back Press 'ESC'\n\n");
		printf("Name of customer: %s",name);
	       /*	for(i=0;name[i]!='\0';i++)
			{
			if((in>=65 && in<=90) || (in>=97 && in<=122))
				{
				//i++;
				//printf("%c",name[i]);
				}
			}   */
		//printf("%s",name);
		name[i]=getche();
		in=name[i];
		if(in==27)
			{
			goto up;
			}
		else if(in==8)
			{
			if(i>0)
				{
				i--;
				name[i]='\0';
				goto name;
				}
			else
				{
				name[0]='\0';
				goto name;
				}
			}
		else if((in>=65 && in<=90) || (in>=97 && in<=122) || in==32)
			{
			i++;
			name[i]='\0';
			goto name;
			}
		else if(in==13)
			{
			if(i<=1)
				{
				printf("\nName can't be a character only");
				printf("\nPress any key to write name again...");
				getch();
				goto name;
				}
			else if(i>1)
				{
				i=0;
				goto mobile;
				}
			}
		else
			{
			name[i]='\0';
			goto name;
			}
		mobile:
		clrscr();
		printf("To go back Press 'ESC'\n\n");
		printf("Name of customer: %s",name);
		printf("\nMobile No. of customer(*Digits only): +91 %s\n",mobile);
		//printf("%s",mobile);
		mobile[i]=getche();
		in=mobile[i];
		if(in==27)
			{
			goto up;
			}
		else if(in==8)
			{
			if(i>0)
				{
				i--;
				mobile[i]='\0';
				goto mobile;
				}
			else
				{
				mobile[0]='\0';
				goto mobile;
				}
			}
		else if(in>=48 && in<=57)
			{
			if(i>9)
				{
				mobile[i]='\0';
				goto mobile;
				}
			else
				{
				i++;
				mobile[i]='\0';
				goto mobile;
				}
			}
		else if(in==13)
			{
			i--;
			if(i<=8)
				{
				printf("\nMobile no.length can't be less than 10 digits");
				printf("\nPress any key to write mobile no. again...");
				getch();
				goto mobile;
				}
			else
				{
				goto bill;
				}
			}
		else
			{
			mobile[i]='\0';
			goto mobile;
			}
		//gets(mobile);
		bill:
		clrscr();
		time(&now);
		printf("\033[0;33m");
		printf("\t\t\t     CAFE & RETREAT");
		printf("\n\t\t\tTele-phone: 6454-2345");
		printf("\n\t\t\t%s",ctime(&now));
		printf("\t\t\t\tINVOICE\n");
		printf("\033[0;35m");
		textcolor(YELLOW);
		gotoxy(60,1);
		cprintf("ESC ->back");
		gotoxy(60,2);
		cprintf("s   ->Save bill");
		gotoxy(60,3);
		cprintf("x   ->Cancle bill");
		gotoxy(60,4);
		cprintf("p   ->Print bill");
		gotoxy(1,5);
		printf("Name  :  %s\nMobile: +91 %s",name,mobile);
		printf("\033[0m");
		printf("\n--------------------------------------------------------------------------------");
		//printf("\033[0;33m");
		textcolor(YELLOW);
		cprintf("Sl.no.           Items       Rate(Rs.)          Quantity             Amount(Rs.)");

		textcolor(WHITE);
		printf("\033[0m");
		a=0;
		for(i=0;i<=9;i++)
			{
			if(quan[i]>0)
				{
				a++;
				printf("  %d.\t\t%s\t           %0.0f\t\t\t%0.2f",a,menu[i],quan[i],price[i]*quan[i]);
				//printf("\n--------------------------------------------------------------------------------");
				printf("\n");
				amount=amount+(price[i]*quan[i]);
				}
			}
		printf("--------------------------------------------------------------------------------");
		}
	if(amount<=1000)
		{
		dis=0;
		}
	else if(amount>1000 && amount<=2500)
		{
		dis=0.05*amount;
		}
	else
		{
		dis=0.1*amount;
		}
	printf("\033[0;35m");
	printf("  Total amount(Rs.):                                                    %0.2f",amount);
	printf("\n  Discount(Rs.):                                                        %0.2f",dis);
	printf("\n  Net amount(Rs.):                                                      %0.2f",amount-dis);
	ch=getch();
	in=ch;
	if(ch=='s' || ch=='S')
		{
		save:
		clrscr();
		gotoxy(30,12);
		textcolor(RED);
		cprintf("BILL SAVED");
		while(1)
			{
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal");
			delay(400);
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal.");
			delay(400);
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal..");
			delay(400);
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal...");
			delay(400);
			if(kbhit())
				{
				break;
				}
			goto save;
			}
		}
	else if(ch=='x' || ch=='X')
		{
		cancle:
		clrscr();
		gotoxy(30,12);
		textcolor(RED);
		cprintf("BILL CANCLED");
		while(1)
			{
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal");
			delay(400);
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal.");
			delay(400);
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal..");
			delay(400);
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal...");
			delay(400);
			if(kbhit())
				{
				break;
				}
			goto cancle;
			}
		}
	else if(ch=='p' || ch=='P')
		{
		print:
		clrscr();
		gotoxy(30,12);
		textcolor(RED);
		cprintf("BILL PRINTED");
		while(1)
			{
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal");
			delay(400);
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal.\r");
			delay(400);
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal..\r");
			delay(400);
			gotoxy(30,12);
			printf("\n\n\t\t   Press any key to exit the portal...\r");
			delay(400);
			if(kbhit())
				{
				break;
				}
			goto print;
			}
		}
	else if(in==27)
		{
		textcolor(WHITE);
		goto name;
		}
	else
		{
		textcolor(WHITE);
		goto bill;
		}
	getch();
	}
