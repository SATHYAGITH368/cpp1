#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public:
    void read(void)
    {
        cout<<"enter a binary number";
        cin>>s;
    }
    void chk_bin(void)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"incorrect binary number";
            }
        }
    }
    void ones(void)
    {
        chk_bin();
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            {
                s.at(i)='1';
            }
            else
            {
                s.at(i)='0';
            }
        }
    }
    void displayones(void)
    {
        ones();
        cout<<"the1s compliment in the above binary numbver"<<s;
    }
};
int main()
{
    binary b;
    b.read();
    b.displayones();
    return 0;

}