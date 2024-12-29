#include <iostream>
using namespace std;
class counter
{
    int count;

public:
    counter()
    {
        count = 0;
    }
   // void operator ++ (int);//without frn fn
    friend void operator ++ ( counter &,int); // frn fn

    void display()
    {
        cout << "count=" << count << endl;
    }
};
 /*void counter ::operator++(int)
{
    count++;
}*/
void operator ++ ( counter &c1,int) // frn fn
{
    c1.count ++; // frn fn
}
int main()
{
    counter c;
    c.display();
    c ++;
    c ++;
    c ++;
    c.display();
    return 0;
}