#include <bits/stdc++.h>
using namespace std;
fstream file("Doctor.txt",ios::in | ios::out | ios::app);

#include "doctor.h"
#include "times.h"

int main()
{
    cout<<"\n\n\t\t   !!!!Welcome to JU Medical (Doctor) Schedule!!!!\n\n ";
    int option;

   do
   {


    cout<<"\n\n\t\t-----===================================-----\n"<<endl;
    cout<<"\t\t    Press < 1 > :: For Doctor's Schedule         "<<endl;
    cout<<"\t\t    Press < 2 > :: For Doctor's List             "<<endl;
    cout<<"\t\t    Press < 3 > :: For Doctor's Appointment      "<<endl;
    cout<<"\t\t    Press < 4 > :: For To Close The Programm     "<<endl;
    cout<<"\n\t\t-----===================================-----"<<endl;


    cout<<"\n\t\t [ CHOICE ]   ---> "; cin>>option;






    doctor *dd;
    map<string, int>mp;
    mp.clear();

    times tt;
    dd = new doctor;
    dd->pushDoctor();

    if(option==1)
    {
       tt.get_data();
       int x = tt.gethour();
       cout<<"\n\n";

     if(x>=0 and x<=5)
     {
        for(int i=0; i<5; i++){  cout <<"\t\t   "<< dd->doctorlist[i] << endl;  }
     }
     else if(x>=6 and x<=11)
     {
        for(int i=5; i<10; i++) cout <<"\t\t   "<< dd->doctorlist[i] << endl;
     }
     else if(x>=12 and x<=17)
     {
        for(int i=10; i<15; i++) cout <<"\t\t   "<< dd->doctorlist[i] << endl;
     }
     else if(x>=18 and x<=23)
     {
        for(int i=15; i<20; i++) cout <<"\t\t   "<< dd->doctorlist[i] << endl;
     }
    }
    else if(option==2)
    {
       dd->showallDoctor();
    }
    else if(option==3)
    {

      char ch;
       dd->showallDoctor();

      cout<<"\tDo You Want to Appoint Any Doctor ? if yes then press 'y' else 'n' ";
      cout<<""; cin>>ch;

      if(ch=='y')
      {
           int n;
           cout<<"\n\n\t\t Enter Doctor's ID "; cin>>n;
           --n;
           cout<<"\n\n\t\t Appoinnted";
           mp[dd->doctorlist[n]]++;


           cout<<"\n\n\t\t "<<dd->doctorlist[n];

      }

    }
   else if(option==4)
    {
        cout<<"\n\n\t\tEnd the program\n\n";

    }
    else
    {
        cout<<"\n\n\t\t wrong keyword ";
    }


   }while(option!=4);

/*



    cout << "\t\tNow Avialable Doctors are:: \n";

    */
    return 0;
}
