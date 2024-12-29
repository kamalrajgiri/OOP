#include <iostream>
using namespace std;
class student
{
public:
    float k=50;
    char str[50]="sumit";
   /* void getdata()
    {
        cout << "enter name ";
        cin >> str;
        cout << "\n enter integer number";
        cin >> k;
    }*/
    void display()
    {
        cout << "name :  " << str << "\n roll : " << k;
    }
};
int main()
{
    student s1, s2;
   // s1.getdata();
    s2 = s1;
    s2.display();
    return 0;
}