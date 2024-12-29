/*return by refrence function*/
#include <iostream>
using namespace std;
int &max(int &, int &);
int main()
{
    int a, b, u;
    cin >> a >> b;
    cout << "before calling functiomn a=" << a << " and b=" << b;
    u = max(a, b);
    cout << endl
         << "after calling function a = " << a << " and b = " << b;
    cout << endl
         << "max vbalue = " << u;
    return 0;
}
int &max(int &x, int &y)
{
    if (x > y)
        return x;
    else
        return y;
}