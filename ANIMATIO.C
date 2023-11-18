#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
	{
	int gd=DETECT,gm;
	int in;
	char ch;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	easy:
	cleardevice();
	settextstyle(7,0,6);
	setcolor(YELLOW);
	outtextxy(10,10,"Easy ");
	settextstyle(7,0,4);
	setcolor(WHITE);
	outtextxy(10,100,"Medium");
	outtextxy(10,190,"Hard");
	ch=getch();
	in=ch;
	if(ch=='s' || ch=='S' || in==80)
		{
		medium:
		cleardevice();
		settextstyle(7,0,4);
		setcolor(WHITE);
		outtextxy(10,10,"Easy");
		settextstyle(7,0,6);
		setcolor(YELLOW);
		outtextxy(10,100,"Medium");
		settextstyle(7,0,4);
		setcolor(WHITE);
		outtextxy(10,190,"Hard");
		}
	else if(ch=='w' || ch=='W' || in==224)
		{
		goto hard;
		}
	ch=getch();
	in=ch;
	if(ch=='s' || ch=='S' || in==80)
		{
		hard:
		cleardevice();
		outtextxy(10,10,"Easy");
		outtextxy(10,100,"Medium");
		settextstyle(7,0,6);
		setcolor(YELLOW);
		outtextxy(10,190,"Hard");
		}
	else if(ch=='w' || ch=='W' || in==224)
		{
		goto easy;
		}
	ch=getch();
	in=ch;
	if(ch=='s' || ch=='S' || in==80)
		{
		goto easy;
		}
	else if(ch=='w' || ch=='W' || in==224)
		{
		goto medium;
		}
	//getch();
	}