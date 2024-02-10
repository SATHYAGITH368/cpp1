#include<iostream>
using namespace std;

class POint
{
    int x,y;
    public:
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"("<<x<<","<<y<<")";
    }
};
int main()
{
    Point p1(1,1);
    Point p2(5,10);
    cout<<"point p1=";
    p1.display();
    cout<<"Point p2=";
    p2.display();
    return 0;

}