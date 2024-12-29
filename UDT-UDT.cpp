// WAP to convert polar form data into cartesian form data using construction in destination class
#include <iostream>
#include <math.h>
using namespace std;
class polar
{
private:
    float radius;
    int angle;

public:
    polar()
    {
        radius = 0;
        angle = 0;
    }
    polar(float rad, int ang)
    {
        radius = rad;
        angle = ang;
    }
    float return_rad()
    {
        return (radius);
    }
    int return_ang()
    {
        return (angle);
    }
    void display()
    {
        cout << "polar data : (" << radius << "," << angle << ")";
    }
};
class cartesian
{
    float xco, yco;

public:
    cartesian()
    {
        xco = 0;
        yco = 0;
    }
    cartesian(polar p)
    {
        xco = (p.return_rad()) * cos(p.return_ang());
        yco = (p.return_rad()) * sin(p.return_ang());
    }
    void display()
    {
        cout << xco << yco;
    }
};
int main()
{
    polar pol(2.5, 30);
    cartesian cart;
    cart = pol;
    pol.display();
    cart.display();
    return 0;
}