#include<iostream>
using namespace std;
class matrix
{
    int m[3][3];
    public:
    void read(void)
    {
        cout<<"enter the elements of the 3*3matrix:";
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>m[i][j]
            }
        }
    }
    void display(void)
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<m[i][j];
            }
        }

    }
    friend matrix trans(matrix);
};
matrix trans(matrix m)
{
    matrix m2;
    int i,j;
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                m2.m[i][j]=m1.m[j][i];
            }
        }
        return m2;
}