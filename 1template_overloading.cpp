//3. WAP to show the concept of template overloading with normal function
/*#include <iostream>
using namespace std;
template <class t>
t sum(t a, t b)
{
    float p,q;
    a=p;b=q;
    t sum = 0;
    sum = a + b;
    cout << "\n the sum is template  " << sum;
}
int getdata()
{
    float p;
    float q;
    p=0;q=0;
    cout << "\n enter two numbers";
    cin >> p >> q;
    sum(p,q);
    }
int sum(float x ,float y)
{
    float p,q;
    float a,b;
    a=p;b=q;
    int sum = 0;
    sum = a + b;
    cout << " \n the sum is integer " << sum;
}
int main()
{
    getdata();
    getdata();
   // sum(4,5);
    return 0;
}*/
#include <iostream>
using namespace std;
template <class t>
void sum(t p, t q)
{
    t a;
    t b;
    a = p;
    b = q;
    t sum = 0;
    sum = a + b;
    cout << "\n the sum is template : " << sum;
}
void sum(float x, float y)
{
    float a, b;
    a = x;
    b = y;
    float sum;
    sum = a + b;
    cout << " \n the sum is integer : " << sum; 
}
int main()
{
    float a, b;
    cout << "enter two numbers";
    cin >> a >> b;
    sum(a, b);
    return 0;
}