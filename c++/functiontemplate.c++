#include<iostream>
using namespace std;

template<class T>
void swap(T &x,T &y)
{
    T temp=x;
    x=y;
    y=temp;

}
void fun(int m,int n, float a,float b)
{
    swap(m,n);

    swap(a,b);
}
int main()
{
    fun(100,200,11.22,33.44);
    return 0;
}
