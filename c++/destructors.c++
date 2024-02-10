#include<iostream>
using namespace std;
int count=0;
class test
{
    public:
      test()
      {
        count++;
        cout<<"\n\n constructor msg:object number";
      }
      ~test()
      {
        cout<<"destructor";
        count--;
      }
};