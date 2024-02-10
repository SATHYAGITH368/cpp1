#include<iostream>
using namespace std;

void toh(int d,char t1,char t2,char t3)
{
    if(d==1)
    {
        cout<<"shift top disk from tower"<<t1<<"to tower"<<t2;
        return;


    }
    toh(d-1,t1,t3,t2);
    cout<<"shift top disk from tower"<<t1<<"towe 2"<<t2;
    toh(d-1,t3,t2,t1);


}
int main()
{
    int disk;
    cout<<"enter the number of disks:";
    cin>>disk;

    if(disk>1)
    {
        cout<<"there are no disks to shift";
    }
    else
    {
        cout<<"there are"<<disk<<"disks in tower 1\n";

        toh(disk,'1','2','3');
        cout<<"\n\n"<<disk<<"disks in tower 1 are shifted to tower 2";
    }
}