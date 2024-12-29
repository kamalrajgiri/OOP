/*WAP to make a class having data members name and roll and member function input()
(to get data) and display()(to show data ),make object of class and access those data*/
#include<iostream>
using namespace std;
class student 
{
    private :
    char name[20];
    int roll;
    public:
    void input()
    {
       cout<<"enter name and roll no of student "<<endl;
        cin>>name>>roll;
    }
    void display()
    {
        cout<<"name : "<<name<<endl<<"roll no : "<<roll<<endl;
    }
};
int main()
{
    student s1,s2;
    s1.input();
    s1.display();
    s2.input();
    s2.display();
    return 0;
}