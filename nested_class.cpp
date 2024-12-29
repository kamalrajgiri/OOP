/*WAP having class name student with member roll and name , member function enter()(to get name and roll)
and display()(to display data ) and a nested class date having member day month and year and member functions
get date ()( to gate date) and show date()(todisplay data)*/
#include<iostream>
using namespace std;
class student 
{
    int roll;
    char name [20];
    public:
    void enter ()
    {
        cout<<"enter name and roll no of student "<<endl;
        cin>>name>>roll;
    }
    void display ()
    {
        cout<<"name : "<<name<<" \t roll no : "<<roll<<endl;
    }
    class date
    {
        int day,month,year;
        public : 
        void getdate();
        void showdate();
    };
};
void student::date::getdate()
{
    cout<<"enter birth date in day-month-year format"<<endl;
    cin>>day>>month>>year;
}
 void student::date::showdate()
 {
    cout<<"Birth date : "<<day<<"/"<<month<<"/"<<year;
 }
 int main ()
 {
    student s1;
    student :: date d1;
    s1.enter();
    d1.getdate();
    s1.display();
    d1.showdate();
    return 0;
 }