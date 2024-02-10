#include<iostream>
using namespace std;
class ABC;//forward declaration
class XYZ
{
    int data;
    public:
    void setValue(int value)
    {
        data=value;
    }
    friend void add(XYZ,ABC)
};
class  ABC
{
    int data;
    public:
    void setValue(int value)
    {
        data=value;
    }
    friend void add(XYZ,ABC);
}
void add(XYZ obj1,ABC obj2)
{
    cout<<"sum of data values of XYZ AND ABC OBJECTS using friend="<<obj1.data+obj2.data;

}
int main()
{
    XYZ X;
    ABC A;
    X.setValue(5);
    A.setValue(50);
    add(X,A);
    return 0;
}