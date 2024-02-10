#include<iostream>
using namespace std;

template<class T1,class T2>
class test
{
    T1 a;
    T2 b;
    public:
    Test(T1 x,T2 y)
    {
        a=x;;
        b=y;
    }
    void show()
    {
        cout<<a<<"and"<<b;
    }


};
int main()
{
    test<float,int>test1(1.23,123);
    test1.show();

    test<int,char>test2(100,'W');
    test2.show();

   

}
