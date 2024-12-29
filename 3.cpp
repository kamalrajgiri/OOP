#include<iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"\n base1 constructor called";
    }
    ~base1()
    {
        cout<<"\n base1 destructor called";
    }
};
class base2
{
    public:
    base2()
    {
        cout<<"\n base2 constructor called";
    }
    ~base2()
    {
        cout<<"\n base2 destructor called";
    }
};
class base3
{
    public:
    base3()
    {
        cout<<"\n base3 constructor called";
    }
    ~base3()
    {
        cout<<"\n base3 destructor called";
    }
};
class child:public base1, public base2, protected base3
{
    public:
    child()
    {
        cout<<"\n child constructor called";
    }
    ~child()
    {
        cout<<"\n child destructor called";
    }
};
int main ()
{
    child c;
    return 0;
}