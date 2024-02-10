#include<iostream>
using namespace std;
const int m=50;
class ITEMS
{
    int itemCode[m];
    float itemprice[m];
    int count;
    public:
    void cnt(void)
    {
        count=0;
    }
    void getitem(void);
    void displaysum(void);
    void remove(void);
    void displayItems(void);

};
void ITEMS::getitem(void)
{
    cout<<"enter item code";
    cin>>itemCode[count];
    cout<<"enter item cost:";
    cin>>itemprice[count];
    count++;


}
void ITEMS::displaysum(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
    {
        sum+=itemprice[i];
    }
    cout<<"total value"<<sum<<"\n";
}
void ITEMS::remove(void)
{
    int a;
    cout<<"enter item code:";
    cin>> a;

    for(int i=0;i<count;i++)
    {
        if(itemCode[i]==a)
        {
            itemprice[i]=0;
        }
    }
}
void ITEMS::displayItems(void)
{
    cout<<"code price";
    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<itemCode[i];
        cout<<" "<<itemprice[i];
    }
    cout<<"\n";
}