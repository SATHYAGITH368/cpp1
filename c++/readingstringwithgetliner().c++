#include<iostream>
using namespace std;
int main()
{
    int size=20;
    char city[20];
    cout<<"enter city name";
    cin>>city;
    cout<<"city name"<<city<<"\n";

    cout<<"enter city name";
    cin.getline(city,size);
    cout<<"city name"<<city<<"\n";

    cout<<"enter city name";
    cin.getline(city,size);
    cout<<"city name"<<city<<"\n";


   

}