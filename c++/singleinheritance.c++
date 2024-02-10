#include<iostream>
using namespace std;

class b
{
    int a;
    public:
     int b;
     void set_ab();
     int get_a(void);
     void show_a(void);
};
Class d:public b
{
    int c;
    public:
    void mul(void);
    void display(void);

};
void b::set_ab(void)
{
    a=5;
    b=10;
}
int b::get_a()
{
    return a;
}
void b::show_a()
{
    cout<<"a="<<a<<"\n";
}
void d::mul()
{
    c=b*get_a();
}
void d::display()
{
    cout<<get_a();
    cout<<b;
    cout<<c;
}
int main()
{
    D d;
    d.set_ab();
    d.mul();
    d.display();
    d.b=20;
    d.mul();
    d.display();
}
