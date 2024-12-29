//1. WAP to show the concept of  constructor invocation in multiple inheritance when base class have parametrized constructor
#include <iostream>
using namespace std;
class Alpha
{
protected:
    float x;

public:
    Alpha(float i)
    {
        x = i;
        cout << "Alpha constructor called \n";
    }
};
class Beta
{
protected:
    float p, q;

public:
    Beta(float a, float b)
    {
        p = a;
        q = b;
        cout << "Beta constructer called \n";
    }
};
class Gamma : public Alpha, public Beta
{
    float u, v;

public:
    Gamma(float a, float b, float c) : Alpha(a), Beta(b, c)
    {
        u = a;
        v = b;
        cout << "Gamma constructer called \n";
    }
    void show()
    {
        cout << "Values of x,p,q,u,v are" << endl
             << x << endl
             << p << endl
             << q << endl
             << u << endl
             << v;
    }
};
int main()
{
    Gamma g(3.5, 9.2, 5.6);
    g.show();
    return 0;
}