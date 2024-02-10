#include <iostream>
using namespace std;

class sample
{
    int a;
    int b;
    public:
     void setValue()
     {
        a=25;
        b=40;
     }
     friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a+s.b)/2.0;
}
int main()
{
    sample X;
    X.setvalue();
    cout<<"Mean value"<<mean(X)<<"\n";
}