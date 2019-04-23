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
