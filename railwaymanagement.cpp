 float amc;
    void getresdet()
    {
        cout<<"Enter the details as follows\n";
        cout<<"Train no:";
        cin>>tno;
        cout<<"Train name:";
        gets(tname);
        cout<<"Boarding point:";
        gets(bp);
        cout<<"Destination pt:";
        gets(dest);
        cout<<"No of seats required:";
        cin>>nosr;
        for(i=0; i<nosr ; i++)
        {
            cout<<"Passenger name:";
            gets(pname[i]);
            cout<<"Passenger age:";
            cin>>age[i];
        }
        cout<<"Enter the class f-first class s-second class:";
        gets(clas);
        cout<<"Date of travel:";
        cin>>d>>m>>y;
        cout<<"Enter the concession category\n";
        cout<<"1.Military\n2.Senior citizen\n";
        cout<<"3.Children below 5 yrs\n4.None\n";
        cin>>con;
        cout<<"............END OF GETTING DETAILS............\n";
    }
    void displayresdet()
    {
        cout<<"...............................................\n";
        cout<<"...............................................\n";
        cout<<"Pnr no:"<<pnr;
        cout<<"\nTrain no:"<<tno;
        cout<<"\nTrain name:";
        puts(tname);
        cout<<"Boarding point:";
        puts(bp);
        cout<<"Destination pt:";
        puts(dest);
        cout<<"No of seats reserved:"<<nosr;
        for(i=0; i<nosr; i++)
        {
            cout<<"Passenger name:";
            puts(pname[i]);
            cout<<"Passenger age:"<<age[i];
        }

        cout<<"\nYour class:";
        puts(clas);
        cout<<"\nDate of reservation:"<<d<<"-"<<m<<"-"<<y;
        cout<<"\nYour concession category:"<<con;
        cout<<"\nYou must pay:"<<amc<<endl;
        cout<<"***********************************************\n";
        cout<<".........END OF RESERVATION.................\n";
        cout<<"***********************************************\n";
    }
};
