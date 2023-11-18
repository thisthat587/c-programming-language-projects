#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
	{
	int choice=0,area=0,perimeter=0,volume=0,conversion=0;
	float n1=0,n2=0,n3=0,n4=0,result=0;
	double km=0,m=0,cm=0,mm=0,dm=0,um=0,nm=0,ft=0,in=0,miles=0,ang=0,rad=0,deg=0,celc=0,farh=0,kelv=0,square=0,square_root=0,percentage=0;
	up:
	clrscr();
	printf("\n\t\t<<<<<<<<<<<<<<< %cCALCULATOR%c >>>>>>>>>>>>>>>",3,3);
	printf("\n________________________________________________________________________________");
	printf("\n\n1.ADDITION \t\t 5.AREA \t\t 9.SQUARE");
	printf("\n2.SUBTRACTION \t\t 6.PERIMETER \t\t 10.SQUARE ROOT");
	printf("\n3.MULTIPLICATION \t 7.VOLUME \t\t 11.PERCENTAGE" );
	printf("\n4.DIVISION \t\t 8.CONVERSION ");
	printf("\n\n0.EXIT");
	printf("\n\nEnter your choice >> ");
	fflush(stdin);
	if(scanf("%d",&choice))
		{
		if(choice>=0 && choice<=11)
			goto proceed;
		else
			goto invalid;
		}
	else
		{
		invalid:
		//clrscr();
		printf("\nNot a valid choice...");
		printf("\nPress any key to go to MAIN MENU to enter choice again...");
		getch();
		goto up;
		}
	proceed:
	switch(choice)
	{
		case 0:
			goto exit;
		case 1:
			clrscr();
			printf("\n1.ADDITION");
			printf("\n\nEnter first number >> ");
			fflush(stdin);
			scanf("%f",&n1);
			printf("Enter second number >> ");
			fflush(stdin);
			scanf("%f",&n2);
			result=n1+n2;
			printf("\n%5.2f+%5.2f=%5.2f",n1,n2,result);
			printf("\n\nPress any key to go to MAIN MENU...");
			getch();
			goto up;
		case 2:
			clrscr();
			printf("\n2.SUBTRACTION");
			printf("\n\nEnter first number >> ");
			fflush(stdin);
			scanf("%f",&n1);
			printf("Enter second number >> ");
			fflush(stdin);
			scanf("%f",&n2);
			result=n1-n2;
			printf("\n%5.2f-%5.2f=%5.2f",n1,n2,result);
			printf("\n\nPress any key to go to MAIN MENU...");
			getch();
			goto up;
		case 3:
			clrscr();
			printf("\n3.MULTIPLICATION");
			printf("\n\nEnter first number >> ");
			fflush(stdin);
			scanf("%f",&n1);
			printf("Enter second number >> ");
			fflush(stdin);
			scanf("%f",&n2);
			result=n1*n2;
			printf("\n%5.2f*%5.2f=%5.2f",n1,n2,result);
			printf("\n\nPress any key to go to MAIN MENU...");
			getch();
			goto up;
		case 4:

			clrscr();
			printf("\n4.DIVISION");
			printf("\n\nEnter first number >> ");
			fflush(stdin);
			scanf("%f",&n1);
			printf("Enter second number >> ");
			fflush(stdin);
			scanf("%f",&n2);
			result=n1/n2;
			printf("\n%f/%5.2f=%5.2f",n1,n2,result);
			printf("\n\nPress any key to go to MAIN MENU...");
			getch();
			goto up;
		case 5:
			area:
			clrscr();
			printf("<<<<<AREA>>>>>");
			printf("\n\n1.Area of RECTANGLE");
			printf("\n2.Area of SQUARE");
			printf("\n3.Area of CIRCLE");
			printf("\n4.Area of TRIANGLE");
			printf("\n5.Area of SPHERE");
			printf("\n6.Area of PARALLELOGRAM");
			printf("\n7.Area of TRAPEZIUM");
			printf("\n\n8.MAIN MENU");
			printf("\n0.EXIT");
			printf("\n\nEnter your choice >> ");
			fflush(stdin);
			if(scanf("%d",&area))
			{
				if(area>=0 && area<=8)
					goto proceed1;
				else
					goto invalid1;
			}
			else
			{
				invalid1:
				clrscr();
				printf("\nInvalid choice.....");
				printf("\nPress any key to go to AREA MENU to enter choice again.....");
				getch();
				goto area;
			}
			proceed1:
			switch(area)
			{
				case 0:
					goto exit;
				case 1:
					clrscr();
					printf("\n1.Area of RECTANGLE >>");
					printf("\n\nEnter LENGTH of RECTANGLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter BREADTH of RECTANGLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					result=n1*n2;
					printf("\n%5.2f*%5.2f=%5.2f cm^2",n1,n2,result);
					printf("\n\nPress any key to go to AREA MENU again..");
					getch();
					goto area;
				case 2:
					clrscr();
					printf("\n1.Area of SQUARE >>");
					printf("\n\nEnter SIDE of SQUARE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					result=n1*n1;
					printf("\n%5.2f*%5.2f=%5.2f cm^2",n1,n1,result);
					printf("\n\nPress any key to go to AREA MENU again..");
					getch();
					goto area;
				case 3:
					clrscr();
					printf("\n1.Area of CIRCLE >>");
					printf("\n\nEnter RADIUS of CIRCLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					result=3.14*n1*n1;
					printf("\n3.14*%5.2f*%5.2f=%5.2f cm^2",n1,n1,result);
					printf("\n\nPress any key to go to AREA MENU again..");
					getch();
					goto area;
				case 4:
					clrscr();
					printf("\n1.Area of TRIANGLE >>");
					printf("\n\nEnter BASE of TRIANGLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter HEIGHT of TRIANGLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					result=0.5*n1*n2;
					printf("\n0.5*%5.2f*%5.2f=%5.2f cm^2",n1,n2,result);
					printf("\nPress any key to go to AREA MENU again..");
					getch();
					goto area;
				case 5:
					clrscr();
					printf("\n1.Area of SPHERE >>");
					printf("\n\nEnter RADIUS of SPHERE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					result=4*3.14*n1*n1;
					printf("\n4*3.14*%5.2f*%5.2f=%5.2f cm^2",n1,n1,result);
					printf("\nPress any key to go to AREA MENU again..");
					getch();
					goto area;
				case 6:
					clrscr();
					printf("\n1.Area of PARALLELOGRAM >>");
					printf("\n\nEnter BASE of PARALLELOGRAM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter HEIGHT of PARALLELOGRAM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					result=n1*n2;
					printf("\n%5.2f*%5.2f=%5.2f cm^2",n1,n2,result);
					printf("\nPress any key to go to AREA MENU again..");
					getch();
					goto area;
				case 7:

					clrscr();
					printf("\n1.Area of TRAPEZIUM >>");
					printf("\n\nEnter first PARALLEL side of TRAPEZIUM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter second PARALLEL side of TRAPEZIUM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					printf("Enter HEIGHT of TRAPEZIUM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n3);
					result=(n1+n2)/2*n3;
					printf("\n(%5.2f+%5.2f)/2*%5.2f=%5.2f cm^2",n1,n2,n3,result);
					printf("\nPress any key to go to AREA MENU again..");
					getch();
					goto area;
				case 8:
					goto up;
			}
		case 6:
			perimeter:
			clrscr();
			printf("<<<<<PERIMETER>>>>>");
			printf("\n\n1.Perimeter of RECTANGLE");
			printf("\n2.Perimeter of SQUARE");
			printf("\n3.Perimeter(circumference) of CIRCLE");
			printf("\n4.Perimeter of TRIANGLE");
			printf("\n5.perimeter(circumference) of SPHERE");
			printf("\n6.perimeter of PARALLELOGRAM");
			printf("\n7.perimeter of TRAPEZIUM");
			printf("\n\n8.MAIN MENU");
			printf("\n0.EXIT");
			printf("\n\nEnter your choice >> ");
			fflush(stdin);
			if(scanf("%d",&perimeter))
			{
				if(perimeter>=0 && perimeter<=8)
					goto proceed2;
				else
					goto invalid2;
			}
			else
			{
				invalid2:
				clrscr();
				printf("\nInvalid choice.....");
				printf("\nPress any key to go to PERIMETER MENU to enter choice again.....");
				getch();
				goto perimeter;
			}
			proceed2:
			switch(perimeter)
			{
				case 0:
					goto exit;
				case 1:
					clrscr();
					printf("\n1.Perimeter of RECTANGLE");
					printf("\n\nEnter LENGTH of RECTANGLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter BREADTH of RECTANGLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					result=2*(n1+n2);
					printf("\n2*(%5.2f+%5.2f)=%5.2f cm",n1,n2,result);
					printf("\n\nPress any key to go to PERIMETER MENU again..");
					getch();
					goto perimeter;
				case 2:
					clrscr();
					printf("\n1.Perimeter of SQUARE");
					printf("\n\nEnter SIDE of SQUARE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					result=4*n1;
					printf("\n4*%5.2f=%5.2f cm",n1,result);
					printf("\n\nPress any key to go to PERIMETER MENU again..");
					getch();
					goto perimeter;
				case 3:

					clrscr();
					printf("\n1.Perimeter(circumference) of CIRCLE");
					printf("\n\nEnter RADIUS of CIRCLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					result=2*3.14*n1;
					printf("\n2*3.14*%5.2f=%5.2f cm",n1,result);
					printf("\n\nPress any key to go to PERIMETER MENU again..");
					getch();
					goto perimeter;
				case 4:
					clrscr();
					printf("\n1.Perimeter of TRIANGLE");
					printf("\n\nEnter LENGTH of first side of TRIANGLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter LENGTH of second side of TRIANGLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					printf("Enter LENGTH of third side of TRIANGLE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n3);
					result=n1+n2+n3;
					printf("\n%5.2f+%5.2f+%5.2f=%5.2f cm",n1,n2,n3,result);
					printf("\n\nPress any key to go to PERIMETER MENU again..");
					getch();
					goto perimeter;
				case 5:
					clrscr();
					printf("\n1.Perimeter(cirucmference) of SPHERE");
					printf("\n\nEnter RADIUS of SPHERE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					result=2*3.14*n1;
					printf("\n2*3.14*%5.2f=%5.2f cm",n1,result);
					printf("\n\nPress any key to go to PERIMETER MENU again..");
					getch();
					goto perimeter;
				case 6:
					clrscr();
					printf("\n1.Perimeter of PARALLELOGRAM");
					printf("\n\nEnter LENGTH of PARALLELOGRAM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter BREADTH of PARALLELOGRAM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					result=2*(n1+n2);
					printf("\n2*(%5.2f+%5.2f)=%5.2f cm",n1,n2,result);
					printf("\n\nPress any key to go to PERIMETER MENU again..");
					getch();
					goto perimeter;
				case 7:
					clrscr();
					printf("\n1.Perimeter of TRAPEZIUM");
					printf("\n\nEnter first side of TRAPEZIUM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter second side of TRAPEZIUM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					printf("Enter third side of TRAPEZIUM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n3);
					printf("Enter fourth side of TRAPEZIUM(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n4);
					result=n1+n2+n3+n4;
					printf("\n%5.2f+%5.2f+%5.2f+%5.2f=%5.2f cm",n1,n2,n3,n4,result);
					printf("\n\nPress any key to go to PERIMETER MENU again..");
					getch();
					goto perimeter;
				case 8:
					goto up;
			}
		case 7:
			volume:
			clrscr();
			printf("<<<<<VOLUME>>>>>");
			printf("\n\n1.Volume of CUBE");
			printf("\n2.Volume of CUBOID");
			printf("\n3.Volume of SPHERE");
			printf("\n4.Volume of HEMISPHERE");
			printf("\n5.Volume of CYLINDER");
			printf("\n6.Volume of CONE");
			printf("\n\n7.MAIN MENU");
			printf("\n0.EXIT");
			printf("\n\nEnter your choice >> ");
			fflush(stdin);
			if(scanf("%d",&volume))
			{
				if(volume>=0 && volume<=7)
				       goto proceed3;
				else
				       goto invalid3;
			}
			else
			{
				invalid3:
				clrscr();
				printf("\nInvalid  choice.....");
				printf("\nPress any key to go to VOLUME MENU to enter your choice again.....");
				getch();
				goto volume;
			}
			proceed3:
			switch(volume)
			{
				case 0:
					goto exit;
				case 1:
					clrscr();
					printf("1.Volume of CUBE");
					printf("\n\nEnter side of CUBE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					result=n1*n1*n1;
					printf("\n%5.2f*%5.2f*%5.2f=%5.2f cm^3",n1,n1,n1,result);
					printf("\n\nPress any key to go to VOLUME MENU again..");
					getch();
					goto volume;
				case 2:
					clrscr();
					printf("2.Volume of CUBOID");
					printf("\n\nEnter LENGTH of CUBOID(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter BREADTH of CUBOID(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					printf("Enter HEIGHT of CUBOID(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n3);
					result=n1*n2*n3;
					printf("\n%5.2f*%5.2f*%5.2f=%5.2f cm^3",n1,n2,n3,result);
					printf("\n\nPress any key to go to VOLUME MENU again..");
					getch();
					goto volume;
				case 3:
					clrscr();
					printf("3.Volume of SPHERE");
					printf("\n\nEnter radius of SPHERE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					result=1.33*3.14*n1*n1*n1;
					printf("\n1.33*3.14*%5.2f*%5.2f*%5.2f=%5.2f cm^3",n1,n1,n1,result);
					printf("\n\nPress any key to go to VOLUME MENU again..");
					getch();
					goto volume;
				case 4:
					clrscr();
					printf("4.Volume of HEMISPHERE");
					printf("\n\nEnter radius of HEMISPHERE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					result=0.66*3.14*n1*n1*n1;
					printf("\n\n0.66*3.14*%5.2f*%5.2f*%5.2f=%5.3f cm^3",n1,n1,n1,result);
					printf("\n\nPress any key to go to VOLUME MENU again..");
					getch();
					goto volume;
				case 5:
					clrscr();
					printf("1.Volume of CYLINDER");
					printf("\n\nEnter radius of CYLINDER(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter height of CYLINDER(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					result=3.14*n1*n1*n2;
					printf("\n3.14*%5.2f*%5.2f*%5.2f=%5.2f cm^3",n1,n1,n2,result);
					printf("\n\nPress any key to go to VOLUME MENU again..");
					getch();
					goto volume;
				case 6:
					clrscr();
					printf("1.Volume of CONE");
					printf("\n\nEnter radius of CONE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n1);
					printf("Enter height of CONE(in cm) >> ");
					fflush(stdin);
					scanf("%f",&n2);
					result=0.33*3.14*n1*n1*n2;
					printf("\n0.33*3.14*%5.2f*%5.2f*%5.2f=%5.2f cm^3",n1,n1,n2,result);
					printf("\n\nPress any key to go to VOLUME MENU again..");
					getch();
					goto volume;
				case 7:
					goto up;
			}
		case 8:
			conversion:
			clrscr();
			printf("\t\t\t<<<<< %cCONVERSION%c >>>>>",4,4);
			printf("\n## Length >>>>>");
			printf("\n01.km to m");		printf("\t\t09.km to miles");printf("\t\t17.m to nm");
			printf("\n02.km to dm");	printf("\t\t10.ft to cm");   printf("\t\t18.m to micrometer");
			printf("\n03.km to cm");	printf("\t\t11.ft to m");    printf("\t\t19.m to mm");
			printf("\n04.km to mm");	printf("\t\t12.ft to inch"); printf("\t\t20.m to cm");
			printf("\n05.km to micrometer");printf("\t13.inch to cm");   printf("\t\t21.m to dm");
			printf("\n06.km to nm");	printf("\t\t14.inch to m");  printf("\t\t22.m to km");
			printf("\n07.km to ft");	printf("\t\t15.inch to ft"); printf("\t\t23.m to miles");
			printf("\n08.km to inch");	printf("\t\t16.m to inch");  printf("\t\t24.m to angstroms");

			printf("\n\n## Angle >>>>>");	printf("\t\t## Temperature >>>>>");
			printf("\n25.Degree to Radian");printf("\t27.Degree celcius to degree fahrenheit");
			printf("\n26.Radian to Degree");printf("\t28.Degree celcius to degree kelvin");
			printf("\n\n33.MAIN MENU");	printf("\t\t29.Degree kelvin to degree celcius");
			printf("\n0.EXIT");		printf("\t\t\t30.Degree kelvin to degree fahrenheit");
							printf("\n\t\t\t31.Degree fahrenheit to degree celcius");
							printf("\n\t\t\t32.Degree fahrenheit to degree kelvin");
			printf("\n\nEnter your choice >> ");
			fflush(stdin);
			if(scanf("%d",&conversion))
			{
				if(conversion>=0 && conversion<=33)
					goto proceed4;
				else
					goto invalid4;
			}
			else
			{
				invalid4:
				clrscr();
				printf("\nInvalid choice.....");
				printf("\nPress any key to go to CONVERSION MENU to enter choice again.....");
				getch();
				goto conversion;
			}
			proceed4:
			switch(conversion)
			{
				case 0:
					goto exit;
				case 1:
					clrscr();
					printf("\nEnter length in km >> ");
					fflush(stdin);
					scanf("%lf",&km);
					m=km*1000.0;
					printf("\n%lf km *1000.0 =%lf m",km,m);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 2:
					clrscr();
					printf("\nEnter length in km >> ");
					fflush(stdin);
					scanf("%lf",&km);
					dm=km*10000.0;
					printf("\n%lf km * 10000.0 =%lf dm",km,dm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 3:
					clrscr();
					printf("\nEnter length in km >> ");
					fflush(stdin);
					scanf("%lf",&km);
					cm=km*100000.0;
					printf("\n%lf km * 100000,0 =%lf cm",km,cm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 4:
					clrscr();
					printf("\nEnter length in km >> ");
					fflush(stdin);
					scanf("%lf",&km);
					mm=km*1000000.0;
					printf("\n%lf km * 1000000.0 =%lf mm",km,mm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 5:
					clrscr();
					printf("\nEnter length in km >> ");
					fflush(stdin);
					scanf("%lf",&km);
					um=km*1000000000.0;
					printf("\n%lf km * 1000000000.0 =%lf um",km,um);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 6:
					clrscr();
					printf("\nEnter length in km >> ");
					fflush(stdin);
					scanf("%lf",&km);
					nm=km*1000000000000.0;
					printf("\n%lf km * 1000000000000.0 =%lf nm",km,nm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 7:
					clrscr();
					printf("\nEnter length in km >> ");
					fflush(stdin);
					scanf("%lf",&km);
					ft=km*3280.84;
					printf("\n%lf km * 3280.84 =%lf ft",km,ft);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 8:
					clrscr();
					printf("\nEnter length in km >> ");
					fflush(stdin);
					scanf("%lf",&km);
					in=km*39370.07;
					printf("\n%lf km * 39370.07 =%lf in",km,in);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 9:
					clrscr();
					printf("\nEnter length in km >> ");
					fflush(stdin);
					scanf("%lf",&km);
					miles=km*0.6214;
					printf("\n%lf km * 0.6214 =%lf miles",km,miles);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 10:
					clrscr();
					printf("\nEnter length in ft >> ");
					fflush(stdin);
					scanf("%lf",&ft);
					cm=ft*11.99;
					printf("\n%lf ft * 11.99 =%lf in",ft,cm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 11:
					clrscr();
					printf("\nEnter length in ft >> ");
					fflush(stdin);
					scanf("%lf",&ft);
					m=ft*0.6;
					printf("\n%lf ft * 0.6 =%lf m",ft,m);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 12:
					clrscr();
					printf("\nEnter length in ft >> ");
					fflush(stdin);
					scanf("%lf",&ft);
					in=ft*11.99;
					printf("\n%lf ft * 11.99 =%lf in",ft,in);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 13:
					clrscr();
					printf("\nEnter length in inch >> ");
					fflush(stdin);
					scanf("%lf",&in);
					cm=in*2.54;
					printf("\n%lf in * 2.54 =%lf cm",in,cm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 14:
					clrscr();
					printf("\nEnter length in inch >> ");
					fflush(stdin);
					scanf("%lf",&in);
					m=in*0.0254;
					printf("\n%lf in * 0.0254 =%lf m",in,m);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 15:
					clrscr();
					printf("\nEnter length in inch >> ");
					fflush(stdin);
					scanf("%lf",&in);
					ft=in*0.0833;
					printf("\n%lf in * 0.0833 =%lf ft",in,ft);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 16:
					clrscr();
					printf("\nEnter length in m >> ");
					fflush(stdin);
					scanf("%lf",&m);
					in=m*39.37;
					printf("\n%lf m * 39.37 =%lf in",m,in);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 17:
					clrscr();
					printf("\nEnter length in m >> ");
					fflush(stdin);
					scanf("%lf",&m);
					nm=m*1000000000.0;
					printf("\n%lf m *1000000000.0 =%lf nm",m,nm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 18:
					clrscr();
					printf("\nEnter length in m >> ");
					fflush(stdin);
					scanf("%lf",&m);
					um=m*1000000.0;
					printf("\n%lf m * 1000000.0 =%lf um",m,um);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 19:
					clrscr();
					printf("\nEnter length in m >> ");
					fflush(stdin);
					scanf("%lf",&m);
					mm=m*1000.0;
					printf("\n%lf m * 1000.0 =%lf mm",m,mm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 20:
					clrscr();
					printf("\nEnter length in m >> ");
					fflush(stdin);
					scanf("%lf",&m);
					cm=m*100.0;
					printf("\n%lf m * 100.0 =%lf cm",m,cm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 21:
					clrscr();
					printf("\nEnter length in m >> ");
					fflush(stdin);
					scanf("%lf",&m);
					dm=m*10.0;
					printf("\n%lf m * 10.0 =%lf dm",m,dm);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 22:
					clrscr();
					printf("\nEnter length in m >> ");
					fflush(stdin);
					scanf("%lf",m);
					km=m/1000.0;
					printf("\n%lf m / 1000.0 =%lf km",m,km);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 23:
					clrscr();
					printf("\nEnter length in m >> ");
					fflush(stdin);
					scanf("%lf",&m);
					miles=m/1609.0;
					printf("\n%lf m / 1609.0 =%lf miles",m,miles);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 24:
					clrscr();
					printf("\nEnter length in m >> ");
					fflush(stdin);
					scanf("%lf",&m);
					ang=m*10000000000.0;
					printf("\n%lf m * 10000000000.0 =%lf ang",m,ang);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 25:
					clrscr();
					printf("\nEnter angle in Degree >> ");
					fflush(stdin);
					scanf("%lf",&deg);
					rad=deg*(3.14/180.0);
					printf("\n%lf deg * (3.14/180.0) =%lf rad",deg,rad);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 26:
					clrscr();
					printf("\nEnter angle in Radian (Give angle in the form of 3.14*x) >> ");
					fflush(stdin);
					scanf("%lf",&rad);
					deg=rad*(180.0/3.14);
					printf("\n%lf rad * (180.0/3.14) =%lf deg",rad,deg);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 27:
					clrscr();
					printf("\nEnter Temperature in degree Celcius >> ");
					fflush(stdin);
					scanf("%lf",&celc);
					farh=(celc*1.8)+32.0;
					printf("\n(%lf c * 1.8)+32 =%lf f",celc,farh);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 28:
					clrscr();
					printf("\nEnter Temperature in degree Celcius >> ");
					fflush(stdin);
					scanf("%lf",&celc);
					kelv=celc+273.15;
					printf("\n%lf c +273.15 =%lf k",celc,kelv);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 29:
					clrscr();
					printf("\nEnter Temperature in degree Kelvin >> ");
					fflush(stdin);
					scanf("%lf",&kelv);
					celc=kelv-273.15;
					printf("\n(%lf k-273.15 =%lf c",kelv,celc);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 30:
					clrscr();
					printf("\nEnter Temperature in degree Kelvin >> ");
					fflush(stdin);
					scanf("%lf",&kelv);
					farh=(kelv-273.15)*1.8+32.0;
					printf("\n(%lf k -273.15)*1.8+32.0 =%lf f",kelv,farh);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 31:
					clrscr();
					printf("\nEnter Temperature in degree Fahrenheit >> ");
					fflush(stdin);
					scanf("%lf",&farh);
					celc=(farh-32.0)*5.0/9.0;
					printf("\n(%lf f -32.0)*5.0/9.0= %lf c",farh,celc);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;

				case 32:
					clrscr();
					printf("\nEnter Temperature in degree in Fahrenheit >> ");
					fflush(stdin);
					scanf("%lf",&farh);
					kelv=(farh-32.0)*5.0/9.0+273.15;
					printf("\n(%lf f -32.0) * 5.0/9.0+273.15= %lf k",farh,kelv);
					printf("\n\nPress any key to go to CONVERSION MENU again.....");
					getch();
					goto conversion;
				case 33:
					goto up;
			}

		case 9:
			clrscr();
			printf("SQUARE of a number : ");
			printf("\n_____________________");
			printf("\n\nEnter any number >> ");
			fflush(stdin);
			scanf("%lf",&m);
			square=pow(m,2);
			printf("\nSQUARE of %lf = %lf",m,square);
			printf("\n\nPress any key to go MAIN MENU.....");
			getch();
			goto up;

		case 10:
			clrscr();
			printf("SQUARE ROOT of a number : ");
			printf("\n_____________________");
			printf("\n\nEnter any number >> ");
			fflush(stdin);
			scanf("%lf",&m);
			square_root=sqrt(m);
			printf("\nSQUARE ROOT of %lf = %lf",m,square_root);
			printf("\n\nPress any key to go MAIN MENU.....");
			getch();
			goto up;

		case 11:
			clrscr();
			printf("PERCENTAGE of a number : ");
			printf("\n_______________________");
			printf("\n\nEnter any number >> ");
			fflush(stdin);
			scanf("%lf",&m);
			percentage=m/100;
			printf("\nPERCENTAGE of %lf =%lf / 100 = %lf",m,m,percentage);
			printf("\n\nPress any key to go MAIN MENU.....");
			getch();
			goto up;
	}
	getch();
	exit:
    }
