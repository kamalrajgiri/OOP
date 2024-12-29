#include <iostream>
using namespace std;
class complex
{
    float x, y;

public:
    complex()
    {
        x = 0.00;
        y = 0.00;
    }
    complex(float a, float b)
    {
        x = a;
        y = b;
    }
    friend complex operator+(complex, complex);
    // complex operator+(complex);
    void display();
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return (temp);
}
/*complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}*/
void complex ::display()
{
    cout << x << "+j" << y << endl;
}
int main()
{
    complex c1(2.1, 3.9), c2(1.2, 5.2), c3;
    c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}