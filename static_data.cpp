/* WAP to illustrate the concept of static data by assuming suitable data and functions */
#include <iostream>
using namespace std;
class static_item
{
    static int count;
    float price;

public:
    void getdata(float a)
    {
        price = a;
        count++;
    }
    void showcount()
    {
        cout << "count = " << count << endl;
    }
};
int static_item ::count;
int main()
{
    static_item i1, i2, i3,i4;
    i1.showcount();
    i2.showcount();
    i3.showcount();
    i1.getdata(20.3);
    i2.getdata(27.1);
    i3.getdata(21.2);
    i4.getdata(36.4);
    cout << "\n after reading data";
    i1.showcount();
    i2.showcount();
    i3.showcount();
    return 0;
}