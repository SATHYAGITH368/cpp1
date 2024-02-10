#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char c;
    cout<<"input text";
    cin.get(c);
    while(c!='\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    count <<"no of character"<<count;
    return 0;
}
