#include<iostream>
using namespace std;

const size=3;
template <class T>
class vector
{
        T *v;
        public:
        vector()
        {
            v=new T[size];
            for(int i=0;i<size;i++)
            {
                v[i]=0;
            }
        }
        vector(T* a)
        {
            for(int i=0;i<size;i++)
            {
                v[i]=a[i];
            }
        }
        T operator*(vector &y)
        {
            T sum=0;
            for(int i=0;i<size;i++)
            {
                sum+=this->v[i]*y.v[i];

            }
            return sum;
        }
        void display(void)
        {
            for(int i=0;i<size;i++)
            {
                cout<<v[i];
                cout<<"\n";
            }
        }
};
int main()
{
    int x[3]={1,2,3};
    float y[3]={4.4,5.5,3.3};
    vector <int> v1;
    vector <int> v2;
    v1=x;
    v2=y;

    cout<<"v1=";
    v1.display();

    cout<<"v2=";
    v2.display();

    cout<<"v1*v2="<<v1*v2;
    return 0;
}