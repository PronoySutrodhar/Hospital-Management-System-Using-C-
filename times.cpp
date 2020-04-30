#include <bits/stdc++.h>
using namespace std;
#include "times.h"

times::times()
{
    hour = 0;
    min = 0;
    sec = 0;
}

int times :: gethour()
{
    return hour;
}
int times :: getmin()
{
    return min;
}
int times:: getsec()
{
    return sec;
}
int times :: getdoctor()
{
    return doctor;
}
void times::  get_data()
{
    cout << "\n\t\t   Enter hour : ";
    cin>>hour;
    cout << "\n\t\t   Enter min : ";
    cin>>min;
    cout << "\n\t\t   Enter second : ";
    cin>>sec;
}
void times:: show_data()
{
    cout<<"Enter hour : "<<hour<<endl;;
    cout<<"\nEnter min : "<<min<<endl;
    cout<< "\nEnter sec : "<<sec<<endl;
}
