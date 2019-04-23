#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
#include<time.h>
#include<iomanip.h>
#include<fstream.h>
char f[10]="f";
char s[10]="s";
int addr,ad,flag,f1,d,m,i,amt;
float tamt
class canc
{
public:
    int pnr;
    int tno;
    char tname[100];
    char bp[10];
    char dest[100];
    char pname[10][100];
    int age[20];
    int i;
    char clas[10];
    int nosc;
    int d,m,y;
    float amr;
    void getcancdet()
    {
        cout<<"Enter the details as follows\n";
        cout<<"Pnr no:";
        cin>>pnr;
        cout<<"Date of cancellation:";
        cin>>d>>m>>y;
        cout<<"...........END OF GETTING DETAILS...........\n";
    }
    void displaycancdet()
    {
        cout<<"...........................................\n";
        cout<<"...........................................\n";
        cout<<"Pnr no:"<<pnr;
        cout<<"\nTrain no:"<<tno;
        cout<<"\nTrain name:";
        puts(tname);
        cout<<"Boarding point:";
        puts(bp);

        cout<<"Destination pt:";
        puts(dest);
        cout<<"\nYour class:";
        puts(clas);
        cout<<"no of seats to be cancelled:"<<nosc;
        for(i=0; i<nosc; i++)
        {
            cout<<"Passenger name:";
            puts(pname[i]);
            cout<<"passenger age:"<<age[i];
        }
        cout<<"\nDate of cancellation:"<<d<<"-"<<m<<"-"<<y;
        cout<<"\nYou can collect:"<<amr<<"rs"<<endl;
        cout<<"*****************************************\n";
        cout<<".........END OF CANCELLATION.............\n";
        cout<<"*****************************************\n";
    }
};
{

    fstream f;
    f.open("t.txt",ios::in|ios::out|ios::binary);
    detail a;
    while(f.read((char *) & a,sizeof(a)))
    {
        a.displaydetail();
    }
    getch();
}
void cancell()
{
    detail a;
    reser b;
    canc c;
    fstream f1,f2,f3;
    f1.open("t.txt",ios::in|ios::out|ios::binary);
    f2.open("p.txt",ios::in|ios::out|ios::binary);
    f3.open("cn.txt",ios::in|ios::out|ios::binary);
    cout<<"**********CANCELLATION MENU*********\n";
    c.getcancdet();
    while(f2.read((char *) & b,sizeof(b)))
    {
        if(b.pnr==c.pnr)
        {
            c.tno=b.tno;
            strcpy(c.tname,b.tname);
            strcpy(c.bp,b.bp);
            strcpy(c.dest,b.dest);
            c.nosc=b.nosr;
            for(int j=0; j<c.nosc; j++)
            {
                strcpy(c.pname[j],b.pname[j]);
                c.age[j]=b.age[j];
            }
            strcpy(c.clas,b.clas);
            if(strcmp(c.clas,f)==0)
            {
                while(f1.read((char *) & a,sizeof(a)))
                {

                    if(a.tno==c.tno)
                    {
                        a.c1=a.c1+c.nosc;
                        d=a.d;
                        m=a.m;
                        addr=f1.tellg();
                        ad=sizeof(a.c1);
                        f1.seekp(addr-(7*ad));
                        f1.write((char *) & a.c1,sizeof(a.c1));
                        tamt=b.amc;
                        if((c.d==d)&&(c.m==m))
                        {
                            cout<<"You are cancelling at the date of departure\n";
                            c.amr=tamt-((tamt*60)/100);
                        }
                        else if(c.m==m)
                        {
                            cout<<"You are cancelling at the month of departure\n";
                            c.amr=tamt-((tamt*50)/100);
                        }
                        else if(m>c.m)
                        {
                            cout<<"You are cancelling one month before the date of departure\n";
                            c.amr=tamt-((tamt*20)/100);
                        }
                        else
                        {
                            cout<<"Cancelling after the departure\n";
                            cout<<"Your request cannot be completed\n";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
            else if(strcmp(c.clas,s)==0)
            {
                while(f1.read((char *) & a,sizeof(a)))
                {

                    if(a.tno==c.tno)
                    {
                        a.c2=a.c2+c.nosc;
                        d=a.d;
                        m=a.m;
                        addr=f1.tellg();
                        ad=sizeof(a.c2);
                        f1.seekp(addr-(5*ad));
                        f1.write((char *) & a.c2,sizeof(a.c2));
                        tamt=b.amc;
                        if((c.d==d)&&(c.m==m))
                        {
                            cout<<"You are cancelling at the date of departure\n";
                            c.amr=tamt-((tamt*60)/100);
                        }
                        else if(c.m==m)
                        {
                            cout<<"You are cancelling at the month of departure\n";
                            c.amr=tamt-((tamt*50)/100);
                        }
                        else if(m>c.m)
                        {
                            cout<<"You are cancelling one month before the date of departure\n";
                            c.amr=tamt-((tamt*20)/100);
                        }
                        else
                        {
                            cout<<"Cancelling after the departure\n";
                            cout<<"Your request cannot be completed\n";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
        }
        else
        {
            flag=0;

        }
    }
h:
    if(flag==0)
    {
        cout<<"Enter the correct pnr no\n";
    }
    f1.close();
    f2.close();
    f3.close();
    getch();
}
void can()
{
    int ch;
    do
    {
        cout<<".................CANCELLATION MENU.........\n";
        cout<<"1.Cancell\n2.Return to the main menu\n";
        cout<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            cancell();
            break;
        }
    }
    while(ch==1);
    getch();
}
void user()
{
    login a;
    int ch;
    cout<<"*****************************************************\n";
    cout<<"***********WELCOME TO THE USER MENU**\n";
    cout<<"****************************************************\n";
    char *password;
