/* WAP to add two times given in minutes and hour format using 
the concept of pass objects to the function by value */
#include <iostream>
using namespace std;
class time
{
    int hours, minutes;

public:
    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void display()
    {
        cout << hours << "hours and " << minutes << "minutes";
    }
    void sum(time, time);
};
void time ::sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    time t1, t2, t3;
    t1.gettime(2, 40);
    t2.gettime(3, 50);
    t3.sum(t1, t2);
    cout << "t1= ";
    t1.display();
    cout << endl
         << "t2= ";
    t2.display();
    cout << endl
         << " t3= ";
    t3.display();
    return 0;
}