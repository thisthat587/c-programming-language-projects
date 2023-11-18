#include<stdio.h>
#include<conio.h>
#include<dos.h>
void zero(int x,int y);
void one(int x,int y);
void two(int x,int y);
void three(int x,int y);
void four(int x,int y);
void five(int x,int y);
void six(int x,int y);
void seven(int x,int y);
void eight(int x,int y);
void nine(int x,int y);
void colon(int x,int y);
void call(int digit,int x,int y);
void getTime();

void main()
{       int i=1;
	while(i<=15)
	{
	getTime();
	delay(1000);
	i++;
	}
}
//call function to call any digit.
void getTime()
{
	int i,j;
	int hour = 3,minute = 55,second = 24;
	struct dostime_t time;
	clrscr();
	_dos_gettime(&time);
	hour = time.hour;
	minute = time.minute;
	second = time.second;
	call(hour/10,10,7);
	call(hour%10,18,7);
	colon(24,7);
	call(minute/10,30,7);
	call(minute%10,39,7);
	colon(45,7);
	call(second/10,51,7);
	call(second%10,60,7);

}
void call(int digit,int x,int y)
{
	switch(digit)
	{
		case 1: one(x,y); break;
		case 2: two(x,y); break;
		case 3: three(x,y); break;
		case 4: four(x,y); break;
		case 5: five(x,y); break;
		case 6: six(x,y); break;
		case 7: seven(x,y); break;
		case 8: eight(x,y); break;
		case 9: nine(x,y); break;
		default : zero(x,y);
	}
}

void colon(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if((i==3 && j==3) || (i==7 && j==3)) cprintf("#");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void nine(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || j==5 ||
			(j==1 && i<5)) cprintf("*");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void eight(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || j==1 || j==5) cprintf("*");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void seven(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if(i==1 || j==5) cprintf("*");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void six(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || j==1 || (i>5 && j==5)) cprintf("*");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void five(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || (i<5 && j==1) ||
			(j==5 && i>5)) cprintf("*");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void four(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if((i<=5 && j==1) || i==5 || j==5) cprintf("*");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void three(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || j==5)
			{
				textcolor(cl);
				cprintf("*");
			}
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		//textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void two(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if(i==1 || i==5 || i==9 || (i<5 && j==5) ||
			(j==1 && i>5)) cprintf("*");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void one(int x,int y)
{
	int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if(j==3) cprintf("*");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}
void zero(int x,int y)
{       int i,j,cl=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			gotoxy(x,y);
			if(i == 1 || i == 9 || j == 1 || j == 5) cprintf("*");
			else printf(" ");
			x++;
		}
		y++;
		x=x-5;
		textcolor(cl);
		cl++; if(cl==15)cl=1;
		printf("\n");
	}
}