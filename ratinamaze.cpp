#include<bits/stdc++.h>
#include "graphics.h"
using namespace std;
char sol[100][100];
int n;
void check2(char sol[][100],int p, int q,int aa,int bb,int n);

struct stac
{
    int top,topp;
    int ar[100][2];
}S;

struct stac1
{
    int top1;
    int arr[10][2];
}S1;

struct stac2
{
    int top2;
    int arrr[10][2];
}S2;

struct stac3
{
    int top3;
    int ar3[10][2];
}S3;

struct stac4
{
    int top4;
    int ar4[10][2];
}S4;

void print (char arr[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << arr[i][j] << "   ";
        }
        cout << endl << endl;
    }

}

void  push (int i,int j,int n)
{
    S.ar[++S.top][0]=i;
    S.ar[S.top][1]=j;
    sol[i][j]='R';
    S.topp=S.top;
}

int popi()
{
    if(S.top!=-1)
    return S.ar[S.top--][0];
}

int popj()
{
    return S.ar[S.topp--][1];
}

int isempty()
{
    if(S.top <= -1)
    {
        return 1;
    }
    else
        return 0;
}

void  push1 (int i,int j)
{
    S1.arr[++S1.top1][0]=i;
    S1.arr[S1.top1][1]=j;
    sol[i][j]='C';
}

void pop1()
{
    if(S1.top1!=-1)
    {
        sol[S1.arr[S1.top1][0]][S1.arr[S1.top1][1]]='_';
        S1.top1--;
    }
}

int isempty1()
{
    if(S1.top1 <= -1)
    {
        return 1;
    }
    else
        return 0;
}

void  push2 (int i,int j)
{
    S2.arrr[++S2.top2][0]=i;
    S2.arrr[S2.top2][1]=j;
    sol[i][j]='D';
}

void pop2()
{
    if(S2.top2!=1)
    {
        sol[S2.arrr[S2.top2][0]][S2.arrr[S2.top2][1]]='_';
        S2.top2--;
    }
}

int isempty2()
{
    if(S2.top2 <= -1)
    {
        return 1;
    }
    else
        return 0;
}

void  push3 (int i,int j)
{
    S3.ar3[++S3.top3][0]=i;
    S3.ar3[S3.top3][1]=j;
    sol[i][j]='C';
}

void pop3()
{
    if(S3.top3!=-1)
    {
        sol[S3.ar3[S3.top3][0]][S3.ar3[S3.top3][1]]='_';
        S3.top3--;
    }
}

int isempty3()
{
    if(S3.top3 <= -1)
    {
        return 1;
    }
    else
        return 0;
}

void  push4 (int i,int j)
{
    S4.ar4[++S4.top4][0]=i;
    S4.ar4[S4.top4][1]=j;
    sol[i][j]='C';
}

void pop4()
{
    if(S4.top4!=-1)
    {
        sol[S4.ar4[S4.top4][0]][S4.ar4[S4.top4][1]]='_';
        S4.top4--;
    }
}

int isempty4()
{
    if(S4.top4 <= -1)
    {
        return 1;
    }
    else
        return 0;
}

int grapho(int x,int y, int d1,int d2,int c1,int c2,int f1,int f2,int f)
{
    static int fl=0;
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "");
    int i=0;
    int j=0;
    for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
            rectangle(i*40,j*40, (i*40)+40, (j*40)+40);
            {
                    if(((i==0&&j==7)||(i==0&&j==9)||(i==1&&j==2)||(i==1&&j==3)||(i==1&&j==5)||(i==1&&j==6)||(i==1&&j==7)||(i==2&&j==2)||(i==2&&j==5)||(i==3&&j==2)||(i==3&&j==5)||(i==4&&j==1)||(i==4&&j==2)||(i==4&&j==3)||(i==4&&j==5)||(i==4&&j==6)||(i==4&&j==8)||(i==4&&j==9)||(i==5&&j==3)||(i==5&&j==5)||(i==6&&j==2)||(i==6&&j==3)||(i==6&&j==5)||(i==7&&j==0)||(i==7&&j==7)||(i==7&&j==8)||(i==8&&j==2)||(i==8&&j==3)|(i==8&&j==5)||(i==9&&j==2)))
                    {
                        rectangle(i*40+10,j*40+10, (i*40)+40-10, (j*40)+40-10);
                        setfillstyle(SOLID_FILL,YELLOW);
                        rectangle(i*40+15,j*40+15, (i*40)+40-15, (j*40)+40-15);
                        floodfill(i*40+16,j*40+16,WHITE);
                    }
            }
        }
    }
    setfillstyle(SOLID_FILL,BLUE);
    circle(y*40+15,x*40+15,15);
    floodfill(y*40+16,x*40+16,WHITE);

    setfillstyle(SOLID_FILL,RED);
    circle(d2*40+20,d1*40+20,20);
    floodfill(d2*40+21,d1*40+21,WHITE);

    setfillstyle(SOLID_FILL,RED);
    circle(c2*40+20,c1*40+20,20);
    floodfill(c2*40+20,c1*40+20,WHITE);

    setfillstyle(SOLID_FILL,GREEN);
    rectangle(f2*40,f1*40,(f2*40)+40,(f1*40)+40);
    floodfill(f2*40+1,f1*40+1,WHITE);

    outtextxy(95,130,"E");
    outtextxy(95,255,"E");
    outtextxy(210,370,"E");

   return 0;
}
int grapho2(int x,int y, int d1,int d2,int c1,int c2,int f1,int f2,int g1,int g2, int h1,int h2,int f)
{
    static int fl=0;
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "");
    int i=0;
    int j=0;
    for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
            rectangle(i*40,j*40, (i*40)+40, (j*40)+40);
            {
                    if(((i==0&&j==7)||(i==0&&j==9)||(i==1&&j==2)||(i==1&&j==3)||(i==1&&j==5)||(i==1&&j==6)||(i==1&&j==7)||(i==2&&j==2)||(i==2&&j==5)||(i==3&&j==2)||(i==3&&j==5)||(i==4&&j==1)||(i==4&&j==2)||(i==4&&j==3)||(i==4&&j==5)||(i==4&&j==6)||(i==4&&j==8)||(i==4&&j==9)||(i==5&&j==3)||(i==5&&j==5)||(i==6&&j==2)||(i==6&&j==3)||(i==6&&j==5)||(i==7&&j==0)||(i==7&&j==7)||(i==7&&j==8)||(i==8&&j==2)||(i==8&&j==3)|(i==8&&j==5)||(i==9&&j==2)))
                    {
                        rectangle(i*40+10,j*40+10, (i*40)+40-10, (j*40)+40-10);
                        setfillstyle(SOLID_FILL,YELLOW);
                        rectangle(i*40+15,j*40+15, (i*40)+40-15, (j*40)+40-15);
                        floodfill(i*40+16,j*40+16,WHITE);
                    }
            }
        }
    }
    setfillstyle(SOLID_FILL,BLUE);
    circle(y*40+15,x*40+15,15);
    floodfill(y*40+16,x*40+16,WHITE);

    setfillstyle(SOLID_FILL,RED);
    circle(d2*40+20,d1*40+20,20);
    floodfill(d2*40+21,d1*40+21,WHITE);

    setfillstyle(SOLID_FILL,RED);
    circle(c2*40+20,c1*40+20,20);
    floodfill(c2*40+20,c1*40+20,WHITE);
    setfillstyle(SOLID_FILL,RED);
    circle(g2*40+20,g1*40+20,20);
    floodfill(g2*40+21,g1*40+21,WHITE);

    setfillstyle(SOLID_FILL,RED);
    circle(h2*40+20,h1*40+20,20);
    floodfill(h2*40+20,h1*40+20,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(f2*40,f1*40,(f2*40)+40,(f1*40)+40);
    floodfill(f2*40+1,f1*40+1,WHITE);

    outtextxy(95,130,"E");
    outtextxy(95,255,"E");
    outtextxy(210,370,"E");

   return 0;

}
void tostring(char str[],int num)
{
    int i,rem,len=0,n;
    while(n!=0)
    {
        len++;
        n/=10;
    }
    for(i=0;i<len;i++)
    {
        rem=num%10;
        num=num/10;
        str[len-(i+1)]=(char)rem+'0';
    }
    str[len]='\0';
}

void check(char sol[][100],int p, int q,int aa,int bb,int n)
{
    char cc;
     sol[7][0]='W';
    sol[9][0]='W';
    sol[2][1]='W';
    sol[3][1]='W';
    sol[5][1]='W';
    sol[6][1]='W';
    sol[7][1]='W';
    sol[2][2]='W';
    sol[5][2]='W';
    sol[2][3]='W';
    sol[5][3]='W';
    sol[1][4]='W';
    sol[2][4]='W';
    sol[3][4]='W';
    sol[5][4]='W';
    sol[6][4]='W';
    sol[8][4]='W';
    sol[9][4]='W';
    sol[3][5]='W';
    sol[5][5]='W';
    sol[2][6]='W';
    sol[3][6]='W';
    sol[5][6]='W';
    sol[0][7]='W';
    sol[7][7]='W';
    sol[8][7]='W';
    sol[2][8]='W';
    sol[3][8]='W';
    sol[5][8]='W';
    sol[2][9]='W';

    sol[3][2]='E';
    sol[6][2]='E';
    sol[9][5]='E';

    int i=aa,j=bb,x1=1,y1=n-3,x2=n-2,y2=n-5,flag2=0,count=0,ff=0,e1;
        while (1)
        {
            e1=0;
            sol[aa][bb]='O';
            if(sol[x1][y1]=='W')
            {
                while(1)
                {
                    if(sol[x1][y1]=='W')
                    {
                        x1=x1+1;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            if(x1>=0 && x1<n)
            {
                push1(x1,y1);
            }
            else if(x1>=n)
            {
                x1=1;
                push1(x1,y1);
            }
            if(sol[x2][y2]=='W')
            {
                while(1)
                {
                    if(sol[x2][y2]=='W')
                    {
                        x2=x2-1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(x2>=0 && x2<n)
            {
                push2(x2,y2);
            }
            else if(x2<0)
            {
                x2=n-2;
                push2(x2,y2);
            }
            int flag=0,f=0;
            cout << "\nNext move : ";
            cin >> cc;
            closegraph();
            if (cc == 'w' || cc == 'W')
            {
                i=i-1;
                if(i>=0 && i<n && j>=0 && j<n)
                {
                    if((i==x1 && j==y1 ) || (i==x1+1 && j==y1) || (i==x1-1 && j==y1))
                    {
                        flag2++;
                        f=1;
                    }
                    else if((i==x2 && j==y2) || (i==x2-1 && j==y2) || (i==x2+1 && j==y2))
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==p && j==q)
                    {
                        flag=1;
                    }
                    else if(sol[i][j]=='W')
                    {
                        e1=1;
                        i=i+1;
                        grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    }
                    else
                    {
                        push(i,j,n);
                        count++;
                        grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    }

                    if(sol[i][j]=='E')
                    {
                        count-=5;
                        ff=1;
                    }
                }
                else
                {
                    i=i+1;
                    cout << endl;
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"Out of \n");
                    outtextxy(90,90,"The MAZE !!!\n\n");
                    outtextxy(90,180,"Take another\n\n");
                    outtextxy(90,270,"Move\n\n");
                    delay(1200);
                    cout << "Out of maze !!!";
                    cout << endl;
                    grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    continue;
                }
            }
            else if (cc == 'a' || cc == 'A')
            {
                j=j-1;
                if(i>=0 && i<n && j>=0 && j<n)
                {
                    if(i==x1 && j==y1)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==x2 && j==y2)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==p && j==q)
                    {
                        flag=1;
                    }
                    else if(sol[i][j] == 'W')
                    {
                        j=j+1;
                        e1=1;
                        grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    }
                    else
                    {
                        push(i,j,n);
                        count++;
                        grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    }
                    if(sol[i][j]=='E')
                    {

                        count-=5;
                        ff=1;
                    }

                }
                else
                {
                    j=j+1;
                    cout << endl;
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"Out of \n");
                    outtextxy(90,90,"The MAZE !!!\n\n");
                    outtextxy(90,180,"Take another\n\n");
                    outtextxy(90,270,"Move\n\n");
                    delay(1200);
                    cout << "Out of maze !!!";
                    cout << endl;
                    grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    continue;
                }
            }
            else if (cc == 's' || cc == 'S')
            {
                i=i+1;
                if(i>=0 && i<n && j>=0 && j<n)
                {
                    if((i==x1 && j==y1 ) || (i==x1+1 && j==y1) || (i==x1-1 && j==y1))
                    {
                        flag2++;
                        f=1;
                    }
                    else if((i==x2 && j==y2) || (i==x2-1 && j==y2) || (i==x2+1 && j==y2))
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==p && j==q)
                    {
                        flag=1;
                    }
                    else if(sol[i][j]=='W')
                    {
                        e1=1;
                        i=i-1;
                        grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    }
                    else
                    {
                        push(i,j,n);
                        count++;
                        grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    }
                    if(sol[i][j]=='E')
                    {
                        count-=5;
                        ff=1;
                    }
                }
                else
                {
                    i=i-1;
                    cout << endl;
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"Out of \n");
                    outtextxy(90,90,"The MAZE !!!\n\n");
                    outtextxy(90,180,"Take another\n\n");
                    outtextxy(90,270,"Move\n\n");
                    delay(1200);
                    cout << "Out of maze !!!";
                    cout << endl;
                    grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    continue;
                }
            }
            else if (cc == 'd' || cc == 'D')
            {
                j=j+1;
                if(i>=0 && i<n && j>=0 && j<n)
                {
                    if(i==x1 && j==y1)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==x2 && j==y2)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==p && j==q)
                    {
                        flag=1;
                    }
                    else if(sol[i][j]=='W')
                    {
                        e1=1;
                        j=j-1;
                        grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    }
                    else
                    {
                        push(i,j,n);
                        grapho(i,j,x2,y2,x1,y1,p,q,ff);
                        count++;
                    }
                    if(sol[i][j]=='E')
                    {
                        count-=5;
                        ff=1;
                    }
                }
                else
                {
                    j=j-1;
                    cout << endl;
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"Out of \n");
                    outtextxy(90,90,"The MAZE !!!\n\n");
                    outtextxy(90,180,"Take another\n\n");
                    outtextxy(90,270,"Move\n\n");
                    delay(1200);
                    cout << "Out of maze !!!";
                    cout << endl;
                    grapho(i,j,x2,y2,x1,y1,p,q,ff);
                    continue;
                }
            }
            if(e1==0)
            {
                x1=x1+1;
                x2=x2-1;
            }
            if(flag == 1)
            {
                char a[2];
                print(sol,n);
                int l=118-count;
                l=l*8;
                int i,rem,len=0,n;
                while(n!=0)
                {
                    len++;
                    n=n/10;
                }
                for(i=0;i<len;i++)
                {
                    rem=l%10;
                    l=l/10;
                    a[len-(i+1)]=(char)rem+'0';
                }
                a[len]='\0';
                cout << endl << a << endl;
                int gd = DETECT,gm;
                initgraph(&gd, &gm, "");
                settextstyle(10,0,7);
                outtextxy(90,0,"You won \n");
                outtextxy(90,90,"You scored:\n\n");
                outtextxy(90,180,a);
                delay(5000);
                break;
            }
            if (f==1)
            {
                count=count+10;
                if(flag2==1)
                {
                    i=popi();
                    j=popj();
                    i=popi();
                    j=popj();
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"You got wasted.  \n");
                    outtextxy(90,90,"Second Chance:\n\n");
                    outtextxy(90,180,"Life : 1*2");
                    delay(2000);
                    grapho(i,j,8,5,1,7,p,q,ff);
                    print(sol,n);
                }
                else if(flag2==2)
                {
                    for(int iii=0;iii<4;iii++)
                    {
                        i=popi();
                        j=popj();
                    }
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"You got wasted.  \n");
                    outtextxy(90,90,"Last Chance:\n\n");
                    outtextxy(90,180,"Life : 1*1");
                    delay(2000);
                    grapho(i,j,8,5,1,7,p,q,ff);
                    print(sol,n);
                }
            }
            if(flag2 == 3)
            {
                cout << "\nYou lost !!! \n";
                int gd = DETECT,gm;
                initgraph(&gd, &gm, "");
                settextstyle(10,0,7);
                outtextxy(90,0,"You Lost  \n");
                outtextxy(145,90,":{\n\n");
                delay(2000);
                break;

            }
            pop1();
            pop2();
    }

    if(flag2<3)
    {
        int gd = DETECT,gm;
        initgraph(&gd, &gm, "");
        settextstyle(10,0,7);
        outtextxy(90,0,"Next Level");
        settextstyle(10,0,8);
        outtextxy(90,90,"Level 2\n\n");
        delay(1500);

        cout<<"\n\nEnjoy the Game.\n\n";
        gd = DETECT,gm;
        initgraph(&gd, &gm, "");
        settextstyle(10,0,7);
        outtextxy(90,0,"All the Best !!!  \n");
        outtextxy(90,90,"First Chance:\n\n");
        outtextxy(90,180,"Life : 2*3");
        delay(2000);
        grapho2(0,0,8,5,1,7,p,q,7,2,4,9,1);
        check2(sol,9,9,0,0,n);
    }
    else
    {
        cout << "Thanks \n";
    }
}

void check2(char sol[][100],int p, int q,int aa,int bb,int n)
{
    char cc;
    sol[7][0]='W';
    sol[9][0]='W';
    sol[2][1]='W';
    sol[3][1]='W';
    sol[5][1]='W';
    sol[6][1]='W';
    sol[7][1]='W';
    sol[2][2]='W';
    sol[5][2]='W';
    sol[2][3]='W';
    sol[5][3]='W';
    sol[1][4]='W';
    sol[2][4]='W';
    sol[3][4]='W';
    sol[5][4]='W';
    sol[6][4]='W';
    sol[8][4]='W';
    sol[9][4]='W';
    sol[3][5]='W';
    sol[5][5]='W';
    sol[2][6]='W';
    sol[3][6]='W';
    sol[5][6]='W';
    sol[0][7]='W';
    sol[7][7]='W';
    sol[8][7]='W';
    sol[2][8]='W';
    sol[3][8]='W';
    sol[5][8]='W';
    sol[2][9]='W';

    print(sol,n);

    sol[3][2]='E';
    sol[6][2]='E';
    sol[9][5]='E';

    int i=aa,j=bb,x1=1,y1=n-3,x2=n-2,y2=n-5,x3=7,y3=2,x4=4,y4=9,flag2=0,count=0,ff=0,e1=0;
        while (1)
        {
            e1=0;
            sol[aa][bb]='O';
            if(sol[x1][y1]=='W')
            {
                while(1)
                {
                    if(sol[x1][y1]=='W')
                    {
                        x1=x1+1;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            if(x1>=0 && x1<n)
            {
                push1(x1,y1);
            }
            else if(x1>=n)
            {
                x1=1;
                push1(x1,y1);
            }

            if(sol[x2][y2]=='W')
            {
                while(1)
                {
                    if(sol[x2][y2]=='W')
                    {
                        x2=x2-1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(x2>=0 && x2<n)
            {
                push2(x2,y2);
            }
            else if(x2<0)
            {
                x2=n-2;
                push2(x2,y2);
            }

            if(sol[x3][y3]=='W')
            {
                while(1)
                {
                    if(sol[x3][y3]=='W')
                    {
                        y3=y3+1;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            if(y3>=0 && y3<n)
            {
                push3(x3,y3);
            }
            else if(y3>n-1)
            {
                y3=2;
                push3(x3,y3);
            }

            if(sol[x4][y4]=='W')
            {
                while(1)
                {
                    if(sol[x4][y4]=='W')
                    {
                        y4=y4-1;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            if(y4>=0 && y4<n)
            {
                push4(x4,y4);
            }
            else if(y4<0)
            {
                y4=9;
                push4(x4,y4);
            }

            int flag=0,f=0;
            cout << "\nNext move : ";
            cin >> cc;
            closegraph();
            if (cc == 'w' || cc == 'W')
            {
                i=i-1;
                if(i>=0 && i<n && j>=0 && j<n)
                {
                    if((i==x1 && j==y1 ) || (i==x1+1 && j==y1) || (i==x1-1 && j==y1))
                    {
                        flag2++;
                        f=1;
                    }
                    else if((i==x2 && j==y2) || (i==x2-1 && j==y2) || (i==x2+1 && j==y2))
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==x3 && j==y3)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==x4 && j==y4)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==p && j==q)
                    {
                        flag=1;
                    }
                    else if(sol[i][j]=='W')
                    {
                        i=i+1;
                        grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    }
                    else
                    {
                        push(i,j,n);
                        count++;
                        grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    }

                    if(sol[i][j]=='E')
                    {
                        count-=5;
                        ff=1;
                        e1=1;
                    }
                }
                else
                {
                    i=i+1;
                    cout << endl;
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"Out of \n");
                    outtextxy(90,90,"The MAZE !!!\n\n");
                    outtextxy(90,180,"Take another\n\n");
                    outtextxy(90,270,"Move\n\n");
                    delay(1200);
                    grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    continue;
                }
            }
            else if (cc == 'a' || cc == 'A')
            {
                j=j-1;
                if(i>=0 && i<n && j>=0 && j<n)
                {
                    if(i==x1 && j==y1)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==x2 && j==y2)
                    {
                        flag2++;
                        f=1;
                    }
                    else if((i==x3 && j==y3) || (i==x3 && j==y3+1))
                    {
                        flag2++;
                        f=1;
                    }
                    else if((i==x4 && j==y4) || (i==x4 && j==y4-1))
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==p && j==q)
                    {
                        flag=1;
                    }
                    else if(sol[i][j] == 'W')
                    {
                        j=j+1;
                        grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    }
                    else
                    {
                        push(i,j,n);
                        count++;
                        grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    }
                    if(sol[i][j]=='E')
                    {

                        count-=5;
                        ff=1;
                        e1=1;
                    }

                }
                else
                {
                    j=j+1;
                    cout << endl;
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"Out of \n");
                    outtextxy(90,90,"The MAZE !!!\n\n");
                    outtextxy(90,180,"Take another\n\n");
                    outtextxy(90,270,"Move\n\n");
                    delay(1200);
                    grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    continue;
                }
            }
            else if (cc == 's' || cc == 'S')
            {
                i=i+1;
                if(i>=0 && i<n && j>=0 && j<n)
                {
                    if((i==x1 && j==y1 ) || (i==x1+1 && j==y1) || (i==x1-1 && j==y1))
                    {
                        flag2++;
                        f=1;
                    }
                    else if((i==x2 && j==y2) || (i==x2-1 && j==y2) || (i==x2+1 && j==y2))
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==x3 && j==y3)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==x4 && j==y4)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==p && j==q)
                    {
                        flag=1;
                    }
                    else if(sol[i][j]=='W')
                    {
                        i=i-1;
                        grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    }
                    else
                    {
                        push(i,j,n);
                        count++;
                        grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    }
                    if(sol[i][j]=='E')
                    {
                        count-=5;
                        ff=1;
                        e1=1;
                    }
                }
                else
                {
                    i=i-1;
                    cout << endl;
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"Out of \n");
                    outtextxy(90,90,"The MAZE !!!\n\n");
                    outtextxy(90,180,"Take another\n\n");
                    outtextxy(90,270,"Move\n\n");
                    delay(1200);
                    grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    continue;
                }
            }
            else if (cc == 'd' || cc == 'D')
            {
                j=j+1;
                if(i>=0 && i<n && j>=0 && j<n)
                {
                    if(i==x1 && j==y1)
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==x2 && j==y2)
                    {
                        flag2++;
                        f=1;
                    }
                    else if((i==x3 && j==y3) || (i==x3 && j==y3+1))
                    {
                        flag2++;
                        f=1;
                    }
                    else if((i==x4 && j==y4) || (i==x4 && j==y4-1))
                    {
                        flag2++;
                        f=1;
                    }
                    else if(i==p && j==q)
                    {
                        flag=1;
                    }
                    else if(sol[i][j]=='W')
                    {
                        j=j-1;
                        grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    }
                    else
                    {
                        push(i,j,n);
                        grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                        count++;
                    }
                    if(sol[i][j]=='E')
                    {
                        count-=5;
                        ff=1;
                        e1=1;
                    }
                }
                else
                {
                    j=j-1;
                    cout << endl;
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"Out of \n");
                    outtextxy(90,90,"The MAZE !!!\n\n");
                    outtextxy(90,180,"Take another\n\n");
                    outtextxy(90,270,"Move\n\n");
                    delay(1200);
                    grapho2(i,j,x2,y2,x1,y1,p,q,x3,y3,x4,y4,ff);
                    continue;
                }
            }

            if(e1==0)
            {
                x1=x1+1;
                x2=x2-1;
                y3=y3+1;
                y4=y4-1;
            }

            if(flag == 1)
            {
                char a[2];
                print(sol,n);
                int l=(118-count);
                l=l+80;
                int i,rem,len=0,n;
                while(n!=0)
                {
                    len++;
                    n=n/10;
                }
                for(i=0;i<len;i++)
                {
                    rem=l%10;
                    l=l/10;
                    a[len-(i+1)]=(char)rem+'0';
                }
                a[len]='\0';
                cout << endl << a << endl;
                int gd = DETECT,gm;
                initgraph(&gd, &gm, "");
                settextstyle(10,0,7);
                outtextxy(90,0,"You won \n");
                outtextxy(90,90,"You scored:\n\n");
                outtextxy(90,180,a);
                delay(5000);
                break;
            }
            if (f==1)
            {
                count=count+10;
                if(flag2==1)
                {
                    for(int iii=0;iii<4;iii++)
                    {
                        i=popi();
                        j=popj();
                    }
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"You got wasted.  \n");
                    outtextxy(90,90,"Second Chance:\n\n");
                    outtextxy(90,180,"Life : 2*2");
                    delay(2000);
                    grapho2(i,j,8,5,1,7,p,q,x3,y3,x4,y4,ff);
                    print(sol,n);
                }
                else if(flag2==2)
                {
                    for(int iii=0;iii<6;iii++)
                    {
                        i=popi();
                        j=popj();
                    }
                    int gd = DETECT,gm;
                    initgraph(&gd, &gm, "");
                    settextstyle(10,0,7);
                    outtextxy(90,0,"You got wasted.  \n");
                    outtextxy(90,90,"Last Chance:\n\n");
                    outtextxy(90,180,"Life : 2*1");
                    delay(2000);
                    grapho2(i,j,8,5,1,7,p,q,x3,y3,x4,y4,ff);
                    print(sol,n);
                }
            }
            if(flag2 == 3)
            {
                cout << "\nYou lost !!! \n";
                int gd = DETECT,gm;
                initgraph(&gd, &gm, "");
                settextstyle(10,0,7);
                outtextxy(90,0,"You Lost  \n");
                outtextxy(145,90,":{\n\n");
                delay(2000);
                break;
            }
            pop1();
            pop2();
            pop3();
            pop4();
    }
}

main ()
{
    n=10;
    int p=9,q=9,a=0,b=0;
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "");
    settextstyle(1,0,4);
    outtextxy(60,0,"WELCOME TO ");
    outtextxy(120,40,"RAT IN A MAZE");

    delay(1500);
    settextstyle(1,0,1);
    outtextxy(30,150,"BY :-");
    delay(1100);
    settextstyle(1,0,3);

    outtextxy(120,220,"ABHINAV GAUTAM");
    delay(800);

    outtextxy(120,250,"ARJUN SINGH");
    delay(800);

    outtextxy(120,280,"AYUSH SRIVASTAVA");
    delay(800);

    outtextxy(120,310,"SHIVANK GUPTA");
    delay(2000);

    closegraph();
    S.top=-1;
    S1.top1=-1;
    S2.top2=-1;
    S3.top3=-1;
    S4.top4=-1;

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            sol[i][j]='_';
        }

    }

    cout << endl;
    sol[p][q]='F';
    sol[a][b]='O';
    cout <<"\t\t\t\t\tJIIT GAMER\n\n";
    cout <<"\t\t\t\t\tRat In The Maze";
    cout<<"\n\nRules for the game:";
    cout<<"\n1)You have to traverse the Rat(blue) to the food.";
    cout<<"\n2)You will get 100 points if you are able to get to food in the shortest path possible.\n";
    cout<<"3)You can't cross the Walls.\n";
    cout<<"4)Save yourself from cats in red.\n";
    cout <<"5)If you are one block close to cat you will be taken aback.\n";
    cout <<"6)You will get three chances.\n";
    cout <<"7)You can use energy E once.\n";
    cout <<"8)On completing the level 1 you will reach level 2.\n";
    cout <<"9)There will be 4 cats in level 2.\n";
    cout<<"\n\n\nCheck controls\n";

    int ch=1;
    char ccc[10],cccc[10];

    if(ch==1)
    {
        cout <<"w - up movement\n";
        cout <<"s - down movement\n";
        cout <<"a - left movement\n";
        cout <<"d - right movement";
        cout<< endl;
        cout<<"Enter - confirm movement";
        cout << endl;
    }


    cout<<"\nStart game?\n";
    cin >> ccc;
    if(strcmp(ccc,"Yes")==0 || strcmp(ccc,"yes")==0 || strcmp(ccc,"YES")==0 || strcmp(ccc,"yes")==0)
    {
        cout<<"\n\nEnjoy the Game.\n\n";
        int gd = DETECT,gm;
        initgraph(&gd, &gm, "");
        settextstyle(10,0,7);
        outtextxy(90,0,"All the Best \n");
        outtextxy(90,90,"First Chance:\n\n");
        outtextxy(90,180,"Life : 1*3");
        delay(1500);
        grapho(0,0,8,5,1,7,p,q,0);
        check(sol,p,q,a,b,n);
    }
    else
    {
        cout << "Thanks \n";
    }

}
