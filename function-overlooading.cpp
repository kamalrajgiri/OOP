/*function overloading concept
WAP to calculate volume by usin function overloading */
#include <iostream>
using namespace std;
float volume(float);
float volume(int, float);
float volume(float, float, float);
int main()
{
    float l, b, h, s;
    int k, r;
    cout<<"enter length,breadth,height,side and radius of the geometrical shape \n";
    cin >> l >> b >> h >> s >> r;
    cout << "volumme of cylinder = " << volume(r, h) << endl;
    cout << "volume of cube = " << volume(s) << endl;
    cout << "volume of rectangular box = " << volume(l, b, h);
    return 0;
}
float volume(int r, float h)
{
    float v = 3.14 * r * r * h;
    return v;
}
float volume(float s)
{
    float v = s * s * s;
    return v;
}
float volume(float l, float b, float h)
{
    float v = l * b * h;
    return v;
}