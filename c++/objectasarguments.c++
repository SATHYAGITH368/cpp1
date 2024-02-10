#include<iostream>
using namespace std;
class time
{
    int hours;
    int minuites;
    public:
    void gettime(int h,int m)
    {
        hours=h;
        minuites=m;
    }
    void puttime(void)
    {
        cout<<hours<<"hours and";
        cout<<minuites<<"minuites"<<"\n";
    }
    void sum(time,time);
};
void time::sum(time t1,time t2)
{
    minuites=t1.minuites+t2.minuites;
    hours=minuites/60;
    minuites=minuites%60;
    hours=hours+t1.hours+t2.hours;
}
int main()
{
    time T1,T2,T3;
    T1.gettime(2,45);
    T2.gettime(3,30);

    T3.sum(T1,T2);
    
    cout<<"T1="<<T1.puttime();
    cout<<"T2="<<T2.puttime();
    cout<<"T3="<<T3.puttime();



}
