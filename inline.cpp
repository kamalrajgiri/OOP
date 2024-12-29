/* WAP to sum two integers using concept of inline function*/
#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int p, q, k;
    cout << "enter values of two integers";
    cin >> p >> q;
    k = sum(p, q);
    cout << "returned value = " << k;
    return 0;
}