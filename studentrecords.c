//As of now this file is incomplete but it is functional.
//Compatible to Kate IDE in Linux 
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define bk_w printf("\033[47m");
#define bk_rst printf("\033[49m");

typedef struct
    {
    char name[50];
    char father[50];
    char mother[50];
    char mob[15];
    char dob[15];
    char gender[10];
    char email[25];
    char course[10];
    char address[100];
    char city[20];
    char pin[10];
    long roll;
    }student;
    student std[100] = {
                            {"John Doe", "Michael Doe", "Emily Doe", "1234567890", "01/05/2000", "Male", "john@example.com", "BCA", "123 Main Street", "Cityville", "12345", 1},
                            {"Alice Smith", "David Smith", "Mary Smith", "2345678901", "02/10/2000", "Female", "alice@example.com", "BBA", "456 Elm Avenue", "Townsville", "54321", 2},
                            {"Robert Johnson", "Daniel Johnson", "Jennifer Johnson"," 3456789012", "03/15/2000", "Male", "robert@example.com", "Btech", "789 Oak Lane", "Villageton", "67890", 3},
                            {"Emily Wilson", "Matthew Wilson", "Laura Wilson"," 4567890123", "04/20/2000", "Female", "emily@example.com", "BCA", "567 Pine Road", "Citytown", "45678", 4},
                            {"William Taylor", "James Taylor", "Patricia Taylor", "5678901234", "05/25/2000", "Male", "william@example.com", "BBA", "890 Cedar Street", "Hometown", "34567", 5},
                            {"Linda Brown", "Robert Brown", "Sarah Brown", "6789012345", "06/01/2000", "Female", "linda@example.com", "BCA", "123 Birch Lane", "Suburbia", "23456", 6},
                            {"Daniel Martinez", "Joseph Martinez", "Nancy Martinez", "7890123456", "07/06/2000", "Male", "daniel@example.com", "Btech", "456 Elm Avenue", "Townton", "98765", 7},
                            {"Michael Lee", "Andrew Lee", "Sarah Lee", "8901234567", "08/11/2000", "Male", "michael@example.com", "BBA", "789 Maple Avenue", "Villageville", "12345", 8},
                            {"Maria Anderson", "David Anderson", "Emily Anderson", "9012345678", "09/16/2000", "Female", "maria@example.com", "Btech", "456 Oak Street", "Cityville", "87654", 9},
                            {"Christopher Turner", "Kevin Turner", "Linda Turner", "1098765432", "10/21/2000", "Male", "christopher@example.com", "BCA", "123 Cedar Road", "Suburbia", "76543", 10},
                            {"Richard White", "Matthew White", "Laura White", "2109876543", "11/26/2000", "Male", "richard@example.com", "BBA", "234 Pine Lane", "Villageton", "54321", 11},
                            {"Jennifer Harris", "David Harris", "Emily Harris", "3210987654", "12/31/2000", "Female", "jennifer@example.com", "Btech", "567 Elm Lane", "Townsville", "43210", 12},
                            {"Thomas King", "John King", "Marilyn King", "4321098765", "01/05/2001", "Male", "thomas@example.com", "BCA", "789 Birch Avenue", "Hometown", "21098", 13},
                            {"Laura Davis", "John Davis", "Mary Davis", "5432109876", "02/10/2001", "Female", "laura@example.com", "BBA", "456 Oak Avenue", "Citytown", "32109", 14},
                            {"Matthew Baker", "George Baker", "Anna Baker", "6543210987", "03/15/2001", "Male", "matthew@example.com", "Btech", "890 Cedar Road", "Villageton", "10987", 15},
                            {"Patricia Turner", "Kevin Turner", "Linda Turner", "7654321098", "04/20/2001", "Female", "patricia@example.com", "BCA", "567 Pine Road", "Suburbia", "09876", 16},
                            {"Jennifer Garcia", "David Garcia", "Emily Garcia", "8765432109", "05/25/2001", "Female", "jennifer@example.com", "BBA", "123 Main Street", "Townton", "56789", 17},
                            {"Daniel Rodriguez", "Joseph Rodriguez", "Nancy Rodriguez", "9876543210", "06/30/2001", "Male", "daniel@example.com", "Btech", "456 Elm Avenue", "Cityville", "54321", 18},
                            {"Linda Martinez", "Robert Martinez", "Sarah Martinez", "1098765432", "07/05/2001", "Female", "linda@example.com", "BCA", "789 Oak Lane", "Townsville", "98765", 19},
                            {"Michael Johnson", "William Johnson", "Linda Johnson", "2109876543", "08/10/2001", "Male", "michael@example.com", "BBA", "123 Birch Lane", "Hometown", "23456", 20},
                             {"\0", "\0","\0","\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0",0}
                            };

void box(int dx, int dy, int sx, int sy, int col);
int homnav(int);
void enter(int);
void addnew(int);
void stdrec(int);
void find(int);
int addnewnav(int);

void main()
    {
    int i,y=10,ln;
    int w=1,n=1; y=5;
    // for(int i=0;i<=25;)

    char ch,list[5][200]={"**************************************************************","[1] Student records","[2] Add new student","[3] Find student   ","[4] exit           "};
    while(1)
        {
        clrscr();
        box(42,5,35,21,10);
        y=10;
        printf("\033[34m");
        for(i=1;i<=4;i++)
            {
            if(i==n)
                {
                bk_w;
                }
            gotoxy(50,y+=2);
            puts(list[i]);
            bk_rst;
            }
        n=homnav(w);
        w=n;
        }
    }
int homnav(int n)
    {
    int ln;
    ln=getch();
    if(ln==10) enter(n);
    else if(ln==27)
        {
        getch();
        ln=getch();
        if(ln==65)
            {
            if(n==1) return 4;
            else return --n;
            }
        else if(ln==66)
            {
            if(n==4) return 1;
            else return ++n;
            }
        else return n;
        }
    else return n;
    }
void enter(int n)
    {
    int i;
    static int m=0;
    if(n==1)
        {
        for(m=0;std[m].roll!=0;m++);
        stdrec(10);
        }
    else if(n==2)
        {
        for(m=0;std[m].roll!=0;m++);
        clrscr();
        addnew(m);
        }
    else if(n==3)
        {
        for(m=0;std[m].roll!=0;m++);
        find(m);
        }
    else if(n==4)
        {
        clrscr();
        exit(0);
        }
    }
void stdrec(int m)
    {
    static int next=0;
    int i,j=2,x=2;
    clrscr();
    char ch, design[5][100]={"SL.NO.","ROLL","NAME","MOBILE","COURSE"};
    x=0;
    while(x!=m+1)
        {
        for(i=0;i<=150;i+=30)
            {
            box(i,j,25,2,10);
            }
        j+=3;
        x++;
        }
    x=2;
    for(i=0;i<5;i++)
        {
        // printf("\033[1;31m");
        gotoxy(x,3);
        x+=31;
        printf("%s",design[i]);
        // printf("\033[49m");
        }
    j=6;
    x=0;
    //while(x<=3){
    // for(i=0;std[i].roll!=0;i++)
    for(i=next;i<=(next+9);i++)
        {
        printf("\033[1;33m");
        gotoxy(3,j);
        printf("%d",i+1);
        // printf("\033[49m");
        gotoxy(33,j);
        printf("%ld",std[i].roll);
        gotoxy(63,j);
        printf("%s",std[i].name);
        gotoxy(94,j);
        printf("%s",std[i].mob);
        gotoxy(127,j);
        printf("%s",std[i].course);
        j+=3;
        }
    next+=10;
    //x++;
    // }
    ch=getch();
    // if(ch==27) main();
    if(ch==27)
        {
        getch();
        ch=getch();
        if(ch==66)
            {
            if(std[next+1].roll!=0)
                {
                stdrec(10);
                }
            else main();
            }
        }
    }
int addnewnav(n)
    {
    int ln;
    printf("\033[30m \r");
    ln=getch();
    if(ln==9)
        {
        if(n==11) n=0;
        else n++;
        }
    return n;
    }
void addnew(int next)
    {
    int x=52,y=2;
    static int n=0;
    clrscr();
    // printf("%d",next);
    char list[250]="\n\t\t\t\tNAME           :\n\n\n\t\t\t\tFATHER'S NAME  :\n\n\n\t\t\t\tMOTHER'S NAME  :\n\n\n\t\t\t\tMOBILE         :\n\n\n\t\t\t\tDOB            :\n\n\n\t\t\t\tGENDER         :\n\n\n\t\t\t\tE-MAIL         :\n\n\n\t\t\t\tCOURSE         :\n\n\n\t\t\t\tADDRESS :\n\n\n\n\n\n\t\t\t\tCITY    :\t\t   PIN   :\t\t\t   SUBMIT";
    char confirm[200]="DATA ROCORDED SUCCESFULLY.\nBATCH : \nROLL NO. :\nSECTION  :";
    printf("\033[37m");
    printf("%s",list);
    while(1)
        {
        printf("\r");
        box(50,1,30,2,1);
        box(50,4,30,2,1);
        box(50,7,30,2,1);
        box(50,10,30,2,1);
        box(50,13,30,2,1);
        box(50,16,30,2,1);
        box(50,19,30,2,1);
        box(50,22,30,2,1);
        box(43,25,37,5,1);
        box(43,31,16,2,1);
        box(68,31,12,2,1);
        box(88,31,12,2,2);
        if(n==0)
            {
            // char name[25];
            box(50,1,30,2,4);
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].name[i]=getch();
                if(std[next].name[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].name[i]='\0';
                        gotoxy(52,2);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].name[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].name[i]>=97 && std[next].name[i]<=122) || (std[next].name[i]>=65 && std[next].name[i]<=90) || std[next].name[i]==32)
                    {
                    std[next].name[++i]='\0';
                    x++;
                    }
                else if(std[next].name[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].name[i]='\0';
                    }
                gotoxy(52,2);
                printf("%s",std[next].name);
                }
            }
        if(n==1)
            {
            box(50,4,30,2,4);
            // x=52;
            y=5;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].father[i]=getch();
                if(std[next].father[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].father[i]='\0';
                        gotoxy(52,5);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].father[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].father[i]>=97 && std[next].father[i]<=122) || (std[next].father[i]>=65 && std[next].father[i]<=90) || std[next].father[i]==32)
                    {
                    std[next].father[++i]='\0';
                    x++;
                    }
                else if(std[next].father[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].father[i]='\0';
                    }
                gotoxy(52,5);
                printf("%s",std[next].father);
                }
            }
        if(n==2)
            {
            box(50,7,30,2,4);
            y=8;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].mother[i]=getch();
                if(std[next].mother[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].mother[i]='\0';
                        gotoxy(52,8);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].mother[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].mother[i]>=97 && std[next].mother[i]<=122) || (std[next].mother[i]>=65 && std[next].mother[i]<=90) || std[next].mother[i]==32)
                    {
                    std[next].mother[++i]='\0';
                    x++;
                    }
                else if(std[next].mother[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].mother[i]='\0';
                    }
                gotoxy(52,8);
                printf("%s",std[next].mother);
                }
            }
        if(n==3)
            {
            box(50,10,30,2,4);
            y=11;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].mob[i]=getch();
                if(std[next].mob[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].mob[i]='\0';
                        gotoxy(52,11);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].mob[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].mob[i]>=97 && std[next].mob[i]<=122) || (std[next].mob[i]>=65 && std[next].mob[i]<=90) || std[next].mob[i]==32)
                    {
                    std[next].mob[++i]='\0';
                    x++;
                    }
                else if(std[next].mob[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].mob[i]='\0';
                    }
                gotoxy(52,11);
                printf("%s",std[next].mob);
                }
            }
        if(n==4)
            {
            box(50,13,30,2,4);
            y=14;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].dob[i]=getch();
                if(std[next].dob[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].dob[i]='\0';
                        gotoxy(52,14);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].dob[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].dob[i]>=97 && std[next].dob[i]<=122) || (std[next].dob[i]>=65 && std[next].dob[i]<=90) || std[next].dob[i]==32)
                    {
                    std[next].dob[++i]='\0';
                    x++;
                    }
                else if(std[next].dob[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].dob[i]='\0';
                    }
                gotoxy(52,14);
                printf("%s",std[next].dob);
                }
            }
        if(n==5)
            {
            box(50,16,30,2,4);
            y=17;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].gender[i]=getch();
                if(std[next].gender[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].gender[i]='\0';
                        gotoxy(52,17);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].gender[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].gender[i]>=97 && std[next].gender[i]<=122) || (std[next].gender[i]>=65 && std[next].gender[i]<=90) || std[next].gender[i]==32)
                    {
                    std[next].gender[++i]='\0';
                    x++;
                    }
                else if(std[next].gender[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].gender[i]='\0';
                    }
                gotoxy(52,17);
                printf("%s",std[next].gender);
                }
            }
        if(n==6)
            {
            box(50,19,30,2,4);
            y=20;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].email[i]=getch();
                if(std[next].email[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].email[i]='\0';
                        gotoxy(52,20);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].email[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].email[i]>=97 && std[next].email[i]<=122) || (std[next].email[i]>=65 && std[next].email[i]<=90) || std[next].email[i]==32)
                    {
                    std[next].email[++i]='\0';
                    x++;
                    }
                else if(std[next].email[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].email[i]='\0';
                    }
                gotoxy(52,20);
                printf("%s",std[next].email);
                }
            }
        if(n==7)
            {
            box(50,22,30,2,4);
            y=23;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].course[i]=getch();
                if(std[next].course[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].course[i]='\0';
                        gotoxy(52,23);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].course[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].course[i]>=97 && std[next].course[i]<=122) || (std[next].course[i]>=65 && std[next].course[i]<=90) || std[next].course[i]==32)
                    {
                    std[next].course[++i]='\0';
                    x++;
                    }
                else if(std[next].course[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].course[i]='\0';
                    }
                gotoxy(52,23);
                printf("%s",std[next].course);
                }
            }
        if(n==8)
            {
            box(43,25,37,5,4);
            x=45;
            y=26;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].address[i]=getch();
                if(std[next].address[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].address[i]='\0';
                        gotoxy(45,26);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].address[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].address[i]>=97 && std[next].address[i]<=122) || (std[next].address[i]>=65 && std[next].address[i]<=90) || std[next].address[i]==32)
                    {
                    std[next].address[++i]='\0';
                    x++;
                    }
                else if(std[next].address[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].address[i]='\0';
                    }
                gotoxy(45,26);
                printf("%s",std[next].address);
                }
            }
        if(n==9)
            {
            box(43,31,16,2,4);
            x=44;
            y=32;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].city[i]=getch();
                if(std[next].city[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].city[i]='\0';
                        gotoxy(44,32);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].city[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].city[i]>=97 && std[next].city[i]<=122) || (std[next].city[i]>=65 && std[next].city[i]<=90) || std[next].city[i]==32)
                    {
                    std[next].city[++i]='\0';
                    x++;
                    }
                else if(std[next].city[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].city[i]='\0';
                    }
                gotoxy(44,32);
                printf("%s",std[next].city);
                }
            }
        if(n==10)
            {
            box(68,31,12,2,4);
            x=70;
            y=32;
            for(int i=0;i<=25;)
                {
                gotoxy(x,y);
                std[next].pin[i]=getch();
                if(std[next].pin[i]==127)
                    {
                    if(i==0)
                        {
                        std[next].pin[i]='\0';
                        gotoxy(70,32);
                        printf(" ");
                        }
                    else
                        {
                        i--;
                        x--;
                        std[next].pin[i]='\0';
                        gotoxy(x,y);
                        printf(" ");
                        }
                    }
                else if((std[next].pin[i]>=97 && std[next].pin[i]<=122) || (std[next].pin[i]>=65 && std[next].pin[i]<=90) || std[next].pin[i]==32)
                    {
                    std[next].pin[++i]='\0';
                    x++;
                    }
                else if(std[next].pin[i]==9)
                    {
                    n++;
                    addnew(next);
                    }
                else
                    {
                    std[next].pin[i]='\0';
                    }
                gotoxy(70,32);
                printf("%s",std[next].pin);
                }
            }
        if(n==11)
            {
            box(88,31,12,2,4);
            char ch=getch();
            if(ch==9)
                {
                n=0;
                addnew(next);
                }
            if(ch==10)
                {
                clrscr();
                std[next].roll=111;
                printf("%ld\n",std[next].roll);
                printf("SAVED DATA");
                getch();
                main();
                }
            }
        // printf("\r");
        // n=addnewnav(n);
        }
    getch();
    main();
    // int i,n,m=1;
    // clrscr();
    // printf("How many new student's data you want to add ? : ");
    // scanf("%d",&n);
    // for(i=end;i<(n+end);i++)
    //     {
    //     printf("\nstudent[%d]\n",m++);
    //     printf("\nRoll no : ");
    //     scanf("%ld",&std[i].roll);
    //     printf("Name    : ");
    //     getch();
    //     gets(std[i].name);
    //     printf("Course  : ");
    //     getch();
    //     gets(std[i].course);
    //     printf("Mobile  : ");
    //     scanf("%lld",&std[i].mob);
    //     }
    // getch();
    // printf("\n\n\033[33mADDED\033[39m");
    }
void find(int m)
    {
    int i,flag=0;
    long int roll;
    clrscr();
    printf("Enter roll no. of student to get detail : ");
    scanf("%ld",&roll);
    for(i=0;i<=m;i++)
        {
        if(roll==std[i].roll)
            {
            flag=1;
            printf("\nRoll no. : %ld",std[i].roll);
            printf("\nName     : %s",std[i].name);
            printf("\nCourse   : %s",std[i].course);
            printf("\nMobile   : %lld",std[i].mob);
            }
        }
    if(flag==0) printf("\n\nNOT FOUND");
    getch();
    getch();
    main();
    }
void box(int dx, int dy, int sx, int sy, int col)
    {
        int x = dx, y = dy;
        int i;
        int parx, pary;
        textcolor(col);
        // stand
        for (i = y + 1; i <= y + sy - 1; i++)
        {
            parx = x + sx;
            gotoxy(dx, i);
            printf("\u2502");
            gotoxy(parx, i);
            printf("\u2502");
        }
        // flat
        for (i = x + 1; i <= x + sx - 1; i++)
        {
            pary = y + sy;
            gotoxy(i, dy);
            printf("\u2500");
            gotoxy(i, pary);
            printf("\u2500");
        }
        // up left corner
        gotoxy(dx, dy);
        printf("\u250C");
        // up right corner
        parx = dx + sx;
        gotoxy(parx, dy);
        printf("\u2510");void box(int dx, int dy, int sx, int sy, int col);
        // down left corner
        pary = dy + sy;
        gotoxy(dx, pary);
        printf("\u2514");
        // down right corner
        pary = dy + sy;
        parx = dx + sx;
        gotoxy(parx, pary);
        printf("\u2518");
        textcolor(15);
    }
