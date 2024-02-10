#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);

int main()
{
    cout<<"calling the area() for square"<<area(5)<<"\n";
    cout<<"calling the area() for rectangle"<<area(5,6)<<"\n";
    cout<<"calling the area() for circle"<<area(5.5)<<"\n";

    
}
int area(int r)
{
    int area;
    area=r*r;
    return area;

}
int area(int a,int b)
{
    int area;
    area=a*b;
    return area;

}
float area(float r)
{
    int area;
    area=3.14*r*r;
    return area;

}


