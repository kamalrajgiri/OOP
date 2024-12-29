#include <iostream>
using namespace std;
class Negate
{
    int x, y, z;

public:
    Negate()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Negate(int a, int b, int c);
    void display();
   // void operator-();
     friend void operator - (Negate &n);
};
Negate ::Negate(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
/*void Negate ::display()
{
    cout << x << endl
         << y << endl
         << z;
}
void Negate ::operator-()
{
    x = -x;
    y = -y;
    z = -z;
} */
 void operator -(Negate &n)
 {
     n.x=-n.x;
     n.y=-n.y;
     n.z=-n.z;
     cout<<n.x<<n.y<<n.z;
 }
int main()
{
    Negate N1, N2(10, -12, 50);
    //N1.display();
    -N2;
   // N2.display();
    return 0;
}