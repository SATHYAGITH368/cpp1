#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_number;
    public:
    void get_number(int a)
    {
        roll_number=a;
    }
    void put_number(void)
    {
        cout<<"roll no"<<roll_number;
    }
};
class test:public student
{
    protected:
     float part1,part2;
    public:
     void get_marks(float x,float y )
     {
        part1=x;
        part2=y;
     }
     void put_marks(void)
     {
        cout<<"marks:"
        <<"1"<<part1<<"2"<<part2;
     }
};
class sports
{
    protected:
     float score;
    public:
     void get_score(float s)
     {
        score =s;
     } 
     void put_score(void)
     {
        cout<<score;
     }
};
class result:public test,public sports
{
    float total;
    public:
    void display(void);


};
void result::display(void)
{
    total=part1+part2+score;
    put_number();
    put_marks();
    put_score();

    cout<<"total score"<<total;
}

