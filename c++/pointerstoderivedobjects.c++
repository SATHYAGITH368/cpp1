#include<iostream>
using namespace std;

class bc
{
    public:
    int b;
    void show()
    {
        cout<<"b="<<b;

    }

};
class dc:public bc
{
    public:
    int d;
    void show()
    {
        cout<<b;
        cout<<d;
    }

};
int main()
{
    bc *bptr;
    bc base;
    bptr=&base;

    bptr->b=10;
    cout<<"bptr points to base object"
    bptr->show();

    dc derived;
    bptr=&derived;
    bptr->b=200;
    bptr->d=30;
    cout<<"bptr now points to derived object";
    bptr->show();

    dc *dptr;
    dptr=&derived;
    dptr->d=300;

    cout<<"dptr is derived tyope pointer";
    dptr->show();

    cout<<"using (DC*)bptr";
    ((DC*)bptr)->d=400;
    ((DC*)bptr)->show();
    return 0;
}