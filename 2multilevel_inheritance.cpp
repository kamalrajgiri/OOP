//WAP to show the concept of multiple inheritance
#include <iostream>
using namespace std;
class one
{
    protected:int x;
    public:
void display1()
{
    cout<<"x = "<<x<<endl;
}
};
class two
{
    protected: int y;
    public:
    void display2()
    {
    cout<<"y = "<<y<<endl;}
};
class derived: public one ,public two
{
    protected: int z;
    public:
    void enter()
    {
        cout <<"enter two numbers \n";
        cin>>x>>y;
    }
    void display3()
    {
        z=x+y;
        cout<<"The sum is : "<<z;
    }
};
int main()
{
    derived d;
    d.enter();
    d.display1();
    d.display2();
    d.display3();
    return 0;
}