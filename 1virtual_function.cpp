//2. WAP to show the concept of virtual function
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void display()
    {
        cout << "\n From base class Animal";
    }
};
class cow : public Animal
{
public:
    void display()
    {
        cout << "\n from derived class cow";
    }
};
class dog : public Animal
{
public:
    void display()
    {
        cout << "\n from derived class dog";
    }
};
int main()
{
    Animal *aptr;
    Animal anm;
    cow cw;
    dog dg;
    aptr = &anm;
    aptr->display();
    aptr = &cw;
    aptr->display();
    return 0;
}