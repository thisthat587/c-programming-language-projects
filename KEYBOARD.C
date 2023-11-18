#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<time.h>
void main()
	{
	time_t t1,t2;
	double diff=0,wpm=0,k=0;
	char ch='\0';
	char type[]={"knowledge eliminates fear because it make things clear"};
	char arr[1000]={'\0'};
	int gd=DETECT,gm;
	int len=0,i=0,ln=0,j=0,mistake=0;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	for(i=0;i<=150;i++)
		{
		setcolor(4);
		circle(300,250,i);
		delay(50);
		}
	setcolor(WHITE);
	settextstyle(4,0,5);
	outtextxy(260,115,"Type");

	setcolor(WHITE);
	settextstyle(4,0,6);
	outtextxy(260,170,"Like");

	setcolor(WHITE);
	settextstyle(4,0,7);
	outtextxy(235,230,"Never");

	setcolor(WHITE);
	settextstyle(4,0,7);
	outtextxy(220,300,"Before");

	settextstyle(7,0,4);
	setcolor(GREEN);
	outtextxy(140,410,"By PIYUSH SINGH");

	for(i=0;i<=360;i++)
		{
		setcolor(9);
		arc(300,250,0,i,150);
		arc(301,251,0,i,150);
		delay(30);
		}
	delay(1000);
	cleardevice();
	settextstyle(0,0,0);
	len=strlen(type);
	gotoxy(1,1);
	printf("\033[1;37m\nTo exit press Esc...");
	gotoxy(15,13);
	printf("\033[1;33m%s",type);
	//setcolor(GREEN);
	rectangle(50,180,600,220);
	time(&t1);
	up:
	setcolor(CYAN);
	rectangle(5,250,45,290);
	outtextxy(10,260,"~");
	outtextxy(25,275,"`");
	if(ch=='~' || ch=='`')
		{
		setcolor(RED);
		rectangle(5,250,45,290);
		outtextxy(10,260,"~");
		outtextxy(25,275,"`");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(50,250,90,290);
	outtextxy(55,258,"!");
	outtextxy(70,275,"1");
	if(ch=='1' || ch=='!')
		{
		setcolor(RED);
		rectangle(50,250,90,290);
		outtextxy(55,258,"!");
		outtextxy(70,275,"1");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(95,250,135,290);
	outtextxy(100,260,"@");
	outtextxy(115,275,"2");
	if(ch=='@' || ch=='2')
		{
		setcolor(RED);
		rectangle(95,250,135,290);
		outtextxy(100,260,"@");
		outtextxy(115,275,"2");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(140,250,180,290);
	outtextxy(145,260,"#");
	outtextxy(160,275,"3");
	if(ch=='#' || ch=='3')
		{
		setcolor(RED);
		rectangle(140,250,180,290);
		outtextxy(145,260,"#");
		outtextxy(160,275,"3");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(185,250,225,290);
	outtextxy(190,260,"$");
	outtextxy(205,275,"4");
	if(ch=='4' || ch=='$')
		{
		setcolor(RED);
		rectangle(185,250,225,290);
		outtextxy(190,260,"$");
		outtextxy(205,275,"4");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(230,250,270,290);
	outtextxy(235,260,"%");
	outtextxy(250,275,"5");
	if(ch=='%' || ch=='5')
		{
		setcolor(RED);
		rectangle(230,250,270,290);
		outtextxy(235,260,"%");
		outtextxy(250,275,"5");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(275,250,315,290);
	outtextxy(280,260,"^");
	outtextxy(295,275,"6");
	if(ch=='6' || ch=='^')
		{
		setcolor(RED);
		rectangle(275,250,315,290);
		outtextxy(280,260,"^");
		outtextxy(295,275,"6");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(315,250,355,290);
	outtextxy(320,260,"&");
	outtextxy(335,275,"7");
	if(ch=='7' || ch=='&')
		{
		setcolor(RED);
		rectangle(315,250,355,290);
		outtextxy(320,260,"&");
		outtextxy(335,275,"7");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(360,250,400,290);
	outtextxy(365,260,"*");
	outtextxy(380,275,"8");
	if(ch=='8' || ch=='*')
		{
		setcolor(RED);
		rectangle(360,250,400,290);
		outtextxy(365,260,"*");
		outtextxy(380,275,"8");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(405,250,445,290);
	outtextxy(410,260,"(");
	outtextxy(425,275,"9");
	if(ch=='(' || ch=='9')
		{
		setcolor(RED);
		rectangle(405,250,445,290);
		outtextxy(410,260,"(");
		outtextxy(425,275,"9");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(445,250,485,290);
	outtextxy(450,260,")");
	outtextxy(465,275,"0");
	if(ch=='0' || ch==')')
		{
		setcolor(RED);
		rectangle(445,250,485,290);
		outtextxy(450,260,")");
		outtextxy(465,275,"0");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(490,250,530,290);
	outtextxy(495,260,"_");
	outtextxy(510,275,"-");
	if(ch=='_' || ch=='-')
		{
		setcolor(RED);
		rectangle(490,250,530,290);
		outtextxy(495,260,"_");
		outtextxy(510,275,"-");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(535,250,575,290);
	outtextxy(540,260,"+");
	outtextxy(555,275,"=");
	if(ch=='=' || ch=='+')
		{
		setcolor(RED);
		rectangle(535,250,575,290);
		outtextxy(540,260,"+");
		outtextxy(555,275,"=");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(580,250,635,290);
	outtextxy(584,267,"<-Bksp");
	if(ln==8)
		{
		setcolor(RED);
		rectangle(580,250,635,290);
		outtextxy(584,267,"<-Bksp");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(5,295,60,335);
	outtextxy(20,310,"TAB");
	if(ln==9)
		{
		setcolor(RED);
		rectangle(5,295,60,335);
		outtextxy(20,310,"TAB");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(65,295,105,335);
	outtextxy(80,310,"Q");
	if(type[i]=='q' || type[i]=='Q')
		{
		setcolor(YELLOW);
		rectangle(65,295,105,335);
		outtextxy(80,310,"Q");
		setcolor(CYAN);
		}
	if(ch=='q' || ch=='Q')
		{
		setcolor(RED);
		rectangle(65,295,105,335);
		outtextxy(80,310,"Q");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(110,295,150,335);
	outtextxy(125,310,"W");
	if(type[i]=='w' || type[i]=='W')
		{
		setcolor(YELLOW);
		rectangle(110,295,150,335);
		outtextxy(125,310,"W");
		setcolor(CYAN);
		}
	if(ch=='w' || ch=='W')
		{
		setcolor(RED);
		rectangle(110,295,150,335);
		outtextxy(125,310,"W");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(155,295,195,335);
	outtextxy(170,310,"E");

	if(type[i]=='e' || type[i]=='E')
		{
		setcolor(YELLOW);
		rectangle(155,295,195,335);
		outtextxy(170,310,"E");
		setcolor(CYAN);
		}
	if(ch=='e' || ch=='E')
		{
		setcolor(RED);
		rectangle(155,295,195,335);
		outtextxy(170,310,"E");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(200,295,240,335);
	outtextxy(215,310,"R");

	if(type[i]=='r' || type[i]=='R')
		{
		setcolor(YELLOW);
		rectangle(200,295,240,335);
		outtextxy(215,310,"R");
		setcolor(CYAN);
		}
	if(ch=='r' || ch=='R')
		{
		setcolor(RED);
		rectangle(200,295,240,335);
		outtextxy(215,310,"R");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(245,295,285,335);
	outtextxy(260,310,"T");
	if(type[i]=='t' || type[i]=='T')
		{
		setcolor(YELLOW);
		rectangle(245,295,285,335);
		outtextxy(260,310,"T");
		setcolor(CYAN);
		}
	if(ch=='t' || ch=='T')
		{
		setcolor(RED);
		rectangle(245,295,285,335);
		outtextxy(260,310,"T");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(290,295,330,335);
	outtextxy(305,310,"Y");
	if(type[i]=='Y' || type[i]=='y')
		{
		setcolor(YELLOW);
		rectangle(290,295,330,335);
		outtextxy(305,310,"Y");
		setcolor(CYAN);
		}
	if(ch=='Y' || ch=='y')
		{
		setcolor(RED);
		rectangle(290,295,330,335);
		outtextxy(305,310,"Y");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(335,295,375,335);
	outtextxy(350,310,"U");
	if(type[i]=='u' || type[i]=='U')
		{
		setcolor(YELLOW);
		rectangle(335,295,375,335);
		outtextxy(350,310,"U");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(380,295,420,335);
	outtextxy(395,310,"I");
	if(type[i]=='i' || type[i]=='I')
		{
		setcolor(YELLOW);
		rectangle(380,295,420,335);
		outtextxy(395,310,"I");
		setcolor(CYAN);
		}
	if(ch=='i' || ch=='I')
		{
		setcolor(RED);
		rectangle(380,295,420,335);
		outtextxy(395,310,"I");
		setcolor(CYAN);
		}
	//setcolor(WHITE);
	rectangle(425,295,465,335);
	outtextxy(440,310,"O");

	if(type[i]=='o' || type[i]=='O')
		{
		setcolor(YELLOW);
		rectangle(425,295,465,335);
		outtextxy(440,310,"O");
		setcolor(CYAN);
		}
	if(ch=='o' || ch=='O')
		{
		setcolor(RED);
		rectangle(425,295,465,335);
		outtextxy(440,310,"O");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(470,295,510,335);
	outtextxy(485,310,"P");

	if(type[i]=='p' || type[i]=='P')
		{
		setcolor(YELLOW);
		rectangle(470,295,510,335);
		outtextxy(485,310,"P");
		setcolor(CYAN);
		}
	if(ch=='p' || ch=='P')
		{
		setcolor(RED);
		rectangle(470,295,510,335);
		outtextxy(485,310,"P");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(515,295,555,335);
	outtextxy(525,305,"{");
	outtextxy(535,315,"[");
	if(ch=='{' || ch=='[')
		{
		setcolor(RED);
		rectangle(515,295,555,335);
		outtextxy(525,305,"{");
		outtextxy(535,315,"[");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(560,295,600,335);
	outtextxy(570,305,"}");
	outtextxy(580,315,"]");
	if(ch=='}' || ch==']')
		{
		setcolor(RED);
		rectangle(560,295,600,335);
		outtextxy(570,305,"}");
		outtextxy(580,315,"]");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(5,340,60,380);
	outtextxy(15,350,"CAPS");
	outtextxy(15,365,"LOCK");

	rectangle(65,340,105,380);
	outtextxy(80,355,"A");

	if(type[i]=='a' || type[i]=='A')
		{
		setcolor(YELLOW);
		rectangle(65,340,105,380);
		outtextxy(80,355,"A");
		setcolor(CYAN);
		}
	if(ch=='a' || ch=='A')
		{
		setcolor(RED);
		rectangle(65,340,105,380);
		outtextxy(80,355,"A");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(110,340,150,380);
	outtextxy(125,355,"S");
	if(type[i]=='s' || type[i]=='S')
		{
		setcolor(YELLOW);
		rectangle(110,340,150,380);
		outtextxy(125,355,"S");
		setcolor(CYAN);
		}

	if(ch=='s' || ch=='S')
		{
		setcolor(RED);
		rectangle(110,340,150,380);
		outtextxy(125,355,"S");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(155,340,195,380);
	outtextxy(170,355,"D");
	if(type[i]=='d' || type[i]=='D')
		{
		setcolor(YELLOW);
		rectangle(155,340,195,380);
		outtextxy(170,355,"D");
		setcolor(CYAN);
		}
	if(ch=='d' || ch=='D')
		{
		setcolor(RED);
		rectangle(155,340,195,380);
		outtextxy(170,355,"D");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(200,340,240,380);
	outtextxy(215,355,"F");
	if(type[i]=='f' || type[i]=='F')
		{
		setcolor(YELLOW);
		rectangle(200,340,240,380);
		outtextxy(215,355,"F");
		setcolor(CYAN);
		}
	if(ch=='f' || ch=='F')
		{
		setcolor(RED);
		rectangle(200,340,240,380);
		outtextxy(215,355,"F");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(245,340,285,380);
	outtextxy(260,355,"G");

	if(type[i]=='g' || type[i]=='G')
		{
		setcolor(YELLOW);
		rectangle(245,340,285,380);
		outtextxy(260,355,"G");
		setcolor(CYAN);
		}
	if(ch=='g' || ch=='G')
		{
		setcolor(RED);
		rectangle(245,340,285,380);
		outtextxy(260,355,"G");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(290,340,330,380);
	outtextxy(305,355,"H");

	if(type[i]=='H' || type[i]=='h')
		{
		setcolor(YELLOW);
		rectangle(290,340,330,380);
		outtextxy(305,355,"H");
		setcolor(CYAN);
		}
	if(ch=='H' || ch=='h')
		{
		setcolor(RED);
		rectangle(290,340,330,380);
		outtextxy(305,355,"H");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(335,340,375,380);
	outtextxy(350,355,"J");

	if(type[i]=='j' || type[i]=='J')
		{
		setcolor(YELLOW);
		rectangle(335,340,375,380);
		outtextxy(350,355,"J");
		setcolor(CYAN);
		}
	if(ch=='j' || ch=='J')
		{
		setcolor(RED);
		rectangle(335,340,375,380);
		outtextxy(350,355,"J");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(380,340,420,380);
	outtextxy(395,355,"K");
	if(type[i]=='K' || type[i]=='k')
		{
		setcolor(YELLOW);
		rectangle(380,340,420,380);
		outtextxy(395,355,"K");
		setcolor(CYAN);
		}
	if(ch=='K' || ch=='k')
		{
		setcolor(RED);
		rectangle(380,340,420,380);
		outtextxy(395,355,"K");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(425,340,465,380);
	outtextxy(440,355,"L");
	if(type[i]=='l' || type[i]=='L')
		{
		setcolor(YELLOW);
		rectangle(425,340,465,380);
		outtextxy(440,355,"L");
		setcolor(CYAN);
		}

	if(ch=='l' || ch=='L')
		{
		setcolor(RED);
		rectangle(425,340,465,380);
		outtextxy(440,355,"L");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(470,340,510,380);
	outtextxy(475,350,":");
	outtextxy(490,360,";");
	if(ch==':' || ch==';')
		{
		setcolor(RED);
		rectangle(470,340,510,380);
		outtextxy(475,350,":");
		outtextxy(490,360,";");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(560,340,600,380);
	outtextxy(570,350,"|");
	outtextxy(579,365,"\\");
	if(type[i]=='\\' || type[i]=='|')
		{
		setcolor(YELLOW);
		rectangle(560,340,600,380);
		outtextxy(570,350,"|");
		outtextxy(579,365,"\\");
		setcolor(CYAN);
		}
	if(ch=='\\' || ch=='|')
		{
		setcolor(RED);
		rectangle(560,340,600,380);
		outtextxy(570,350,"|");
		outtextxy(579,365,"\\");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(515,340,555,380);
	outtextxy(520,350,"\"");
	outtextxy(535,360,"'");
	if(type[i]=='"' || type[i]=='\'')
		{
		setcolor(YELLOW);
		rectangle(515,340,555,380);
		outtextxy(520,350,"\"");
		outtextxy(535,360,"'");
		setcolor(CYAN);
		}

	if(ch=='"' || ch=='\'')
		{
		setcolor(RED);
		rectangle(515,340,555,380);
		outtextxy(520,350,"\"");
		outtextxy(535,360,"'");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	settextstyle(0,1,0);
	rectangle(608,295,635,380);
	outtextxy(627,317,"ENTER");
	if(ln==13)
		{
		setcolor(RED);
		rectangle(608,295,635,380);
		outtextxy(627,317,"ENTER");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	settextstyle(0,0,0);
	rectangle(5,385,75,425);
	outtextxy(20,400,"SHIFT");

	rectangle(80,385,120,425);
	outtextxy(95,400,"Z");
	if(type[i]=='z' || type[i]=='Z')
		{
		setcolor(YELLOW);
		rectangle(80,385,120,425);
		outtextxy(95,400,"Z");
		setcolor(CYAN);
		}

	if(ch=='z' || ch=='Z')
		{
		setcolor(RED);
		rectangle(80,385,120,425);
		outtextxy(95,400,"Z");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(125,385,165,425);
	outtextxy(140,400,"X");
	if(type[i]=='X' || type[i]=='x')
		{
		setcolor(YELLOW);
		rectangle(125,385,165,425);
		outtextxy(140,400,"X");
		setcolor(CYAN);
		}

	if(ch=='X' || ch=='x')
		{
		setcolor(RED);
		rectangle(125,385,165,425);
		outtextxy(140,400,"X");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(170,385,210,425);
	outtextxy(185,400,"C");
	if(type[i]=='c' || type[i]=='C')
		{
		setcolor(YELLOW);
		rectangle(170,385,210,425);
		outtextxy(185,400,"C");
		setcolor(CYAN);
		}
	if(ch=='c' || ch=='C')
		{
		setcolor(RED);
		rectangle(170,385,210,425);
		outtextxy(185,400,"C");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(215,385,255,425);
	outtextxy(230,400,"V");
	if(type[i]=='v' || type[i]=='V')
		{
		setcolor(YELLOW);
		rectangle(215,385,255,425);
		outtextxy(230,400,"V");
		setcolor(CYAN);
		}
	if(ch=='v' || ch=='V')
		{
		setcolor(RED);
		rectangle(215,385,255,425);
		outtextxy(230,400,"V");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(260,385,300,425);
	outtextxy(275,400,"B");
	if(type[i]=='b' || type[i]=='B')
		{
		setcolor(YELLOW);rectangle(260,385,300,425);outtextxy(275,400,"B");setcolor(CYAN);
		}
	if(ch=='b' || ch=='B')
		{
		setcolor(RED);
		rectangle(260,385,300,425);
		outtextxy(275,400,"B");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(305,385,345,425);
	outtextxy(320,400,"N");
	if(type[i]=='n' || type[i]=='N')
		{
		setcolor(YELLOW);
		rectangle(305,385,345,425);
		outtextxy(320,400,"N");
		setcolor(CYAN);
		}
	if(ch=='n' || ch=='N')
		{
		setcolor(RED);
		rectangle(305,385,345,425);
		outtextxy(320,400,"N");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(350,385,390,425);
	outtextxy(365,400,"M");
	if(type[i]=='m' || type[i]=='M')
		{
		setcolor(YELLOW);
		rectangle(350,385,390,425);
		outtextxy(365,400,"M");
		setcolor(CYAN);
		}
	if(ch=='m' || ch=='M')
		{
		setcolor(RED);
		rectangle(350,385,390,425);
		outtextxy(365,400,"M");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(395,385,435,425);
	outtextxy(400,395,"<");
	outtextxy(415,405,",");
	if(type[i]==',' || type[i]=='<')
		{
		setcolor(YELLOW);rectangle(395,385,435,425);outtextxy(400,395,"<");outtextxy(415,405,",");setcolor(CYAN);
		}
	if(ch==',' || ch=='<')
		{
		setcolor(RED);
		rectangle(395,385,435,425);
		outtextxy(400,395,"<");
		outtextxy(415,405,",");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(440,385,480,425);
	outtextxy(445,395,">");
	outtextxy(460,405,".");
	if(type[i]=='.' || type[i]=='>')
		{
		setcolor(YELLOW);
		rectangle(440,385,480,425);
		outtextxy(445,395,">");
		outtextxy(460,405,".");
		setcolor(CYAN);
		}

	if(ch=='.' || ch=='>')
		{
		setcolor(RED);
		rectangle(440,385,480,425);
		outtextxy(445,395,">");
		outtextxy(460,405,".");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(485,385,525,425);
	outtextxy(490,395,"?");
	outtextxy(505,405,"/");
	if(type[i]=='/' || type[i]=='?')
		{
		setcolor(YELLOW);
		rectangle(485,385,525,425);
		outtextxy(490,395,"?");
		outtextxy(505,405,"/");
		setcolor(CYAN);
		}
	if(ch=='/' || ch=='?')
		{
		setcolor(RED);
		rectangle(485,385,525,425);
		outtextxy(490,395,"?");
		outtextxy(505,405,"/");
		setcolor(CYAN);
		}
	//setcolor(WHITE);

	rectangle(530,385,635,425);
	outtextxy(545,395,"SHIFT");

	rectangle(150,430,485,470);
	outtextxy(295,445,"SPACE");
	if(type[i]==' ')
		{
		setcolor(YELLOW);
		rectangle(150,430,485,470);
		outtextxy(295,445,"SPACE");
		setcolor(CYAN);
		}
	if(ln==32)
		{
		setcolor(4);
		rectangle(150,430,485,470);
		outtextxy(295,445,"SPACE");
		setcolor(RED);
		}
	//mistake=0;
	for(i=0,j=15;arr[i]!='\0';i++,j++)
		{
		if(arr[i] != type[i])
			{
			gotoxy(j,13);
			printf("\033[1;31m");
			printf("%c",type[i]);
			}
		else if(arr[i] == type[i])
			{
			gotoxy(j,13);
			printf("\033[1;32m");
			printf("%c",arr[i]);
			}
		}
	gotoxy(1,2);
	printf("\033[1;31m\n\nTYPOS  :  %d",mistake);
	gotoxy(15,13);
	if(i != len)
	ch=getche();
	fflush(stdin);
	arr[i]=ch;
	ln=arr[i];
	if(ln==27) exit();
	else if(ln==8)
		{
		arr[i]='\0';
		goto up;
		}
	else if(i == len)
		{
		time(&t2);
		diff = difftime(t2,t1);
		diff = diff/60.0;
		wpm = (len/5.0)/diff;
		gotoxy(68,11);
		printf("WPM : %.f",wpm);
		getch();
		//arr[i]='\0';
		//goto up;
		}
	else if(arr[i] != type[i])
		{
		mistake++;
		gotoxy(j,13);
		printf("\033[1;31m%c",type[i]);
		setcolor(4);
		rectangle(50,180,600,220);
		arr[i]='\0';
		goto up;
		}
	else if(arr[i] == type[i])
		{
		i++;
		arr[i]='\0';
		setcolor(GREEN);
		rectangle(50,180,600,220);
		goto up;
		}
	}