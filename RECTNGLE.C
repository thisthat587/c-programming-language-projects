#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
	{
	int bottom,jan,feb,march,april,may,june,july,aug;
	int gd=DETECT,gm;
	clrscr();
	fflush(stdin);
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	printf("<<<<<<<PICTORIAL REPRESENTATION OF PRESENCE OF STUDENTS IN THE MONTHS>>>>>>>");
	printf("\n\nEnter no. of students present in the month of January: ");
	scanf("%d",&jan);
	printf("Enter no. of students present in the month of February: ");
	scanf("%d",&feb);
	printf("Enter no. of students present in the month of March: ");
	scanf("%d",&march);
	printf("Enter no. of students present in the month of April: ");
	scanf("%d",&april);
	printf("Enter no. of students present in the month of may: ");
	scanf("%d",&may);
	printf("Enter no. of students present in the month of june: ");
	scanf("%d",&june);
	printf("Enter no. of students present in the month of july: ");
	scanf("%d",&july);
	printf("Enter no. of students present in the month of august: ");
	scanf("%d",&aug);
	printf("\n\nPress any key to see the graphs...");
	getch();
	cleardevice();
	outtextxy(47,7,"^");
	outtextxy(548,397,">");
	outtextxy(40,400,"0");
	outtextxy(20,375,"25");
	outtextxy(20,350,"50");
	outtextxy(20,325,"75");
	outtextxy(20,300,"100");
	outtextxy(20,275,"125");
	outtextxy(20,250,"150");
	outtextxy(20,225,"175");
	outtextxy(20,200,"200");
	outtextxy(20,175,"225");
	outtextxy(20,150,"250");
	outtextxy(20,125,"275");
	outtextxy(20,100,"300");
	outtextxy(20,75,"325");
	outtextxy(20,50,"350");
	outtextxy(20,25,"375");
	outtextxy(75,410,"JAN   FEB   MARCH APRIL  MAY   JUNE  JULY  AUGUST");

	outtextxy(500,410,"Months--->");

	line(50,10,50,400); 				//vertical line.
	line(47,375,52,375);       //25
	line(45,350,55,350);           //50
	line(47,325,52,325);               //75
	line(45,300,55,300);                   //100
	line(47,275,52,275);                        //125
	line(45,250,55,250);       //150
	line(47,225,52,225);            //175
	line(45,200,55,200);                 //200
	line(47,175,52,175);                      //225
	line(45,150,55,150);                           //250
	line(47,125,52,125);                                //275
	line(45,100,55,100);                                     //300
	line(47,75,52,75);						//325
	line(45,50,55,50);						//350
	line(47,25,52,25);						//375
	line(50,400,550,400);				//horizontal line.

	for(bottom=400;bottom>=(400 -jan);bottom--)
		{
		if(jan<=200) setcolor(RED);
		else if(jan>200 && jan<=320) setcolor(YELLOW);
		else setcolor(GREEN);
		rectangle(75,400,100,bottom);
		delay(5);
		}
	for(bottom=400;bottom>=400 - feb;bottom--)
		{
		if(feb<=200) setcolor(RED);
		else if(feb>200 && feb<=320) setcolor(YELLOW);
		else setcolor(GREEN);
			{
			rectangle(125,400,150,bottom);
			delay(5);
			}
		}
	for(bottom=400;bottom>=400-march;bottom--)
		{
		if(march<=200) setcolor(RED);
		else if(march>200 && march<=320) setcolor(YELLOW);
		else setcolor(GREEN);
		rectangle(175,400,200,bottom);
		delay(5);
		}
	for(bottom=400;bottom>=400-april;bottom--)
		{
		if(april<=200) setcolor(RED);
		else if(april>200 && april<=320) setcolor(YELLOW);
		else setcolor(GREEN);
		rectangle(225,400,250,bottom);
		delay(5);
		}
	for(bottom=400;bottom>=400-may;bottom--)
		{
		if(may<=200) setcolor(RED);
		else if(may>200 && may<=320) setcolor(YELLOW);
		else setcolor(GREEN);
		rectangle(275,400,300,bottom);
		delay(5);
		}
	for(bottom=400;bottom>=400-june;bottom--)
		{
		if(june<=200) setcolor(RED);
		else if(june>200 && june<=320) setcolor(YELLOW);
		else setcolor(GREEN);
		rectangle(325,400,350,bottom);
		delay(5);
		}
	for(bottom=400;bottom>=400-july;bottom--)
		{
		if(july<=200) setcolor(RED);
		else if(july>200 && july<=320) setcolor(YELLOW);
		else setcolor(GREEN);
		rectangle(375,400,400,bottom);
		delay(5);
		}
	for(bottom=400;bottom>=400-aug;bottom--)
		{
		if(aug<=200) setcolor(RED);
		else if(aug>200 && aug<=320) setcolor(YELLOW);
		else setcolor(GREEN);
		rectangle(425,400,450,bottom);
		delay(5);
		}
	getch();
	closegraph();
	}