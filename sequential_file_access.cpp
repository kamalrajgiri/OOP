#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <exception>
using namespace std;
class student
{
    char name[25];
    int roll;

public:
    void read_data()
    {
        cout << "enter name and roll no";
        cin >> name >> roll;
    }
    void show_data()
    {
        cout << "name : " << name << endl
             << "roll no : " << roll;
    }
};
void write2file()
{
    student stu;
    cout << "Data read from file are :";
    ofstream outfile("record.data", ios::binary | ios::app);
    stu.read_data();
    outfile.write(reinterpret_cast<char *>(&stu); sizeof(stu));
}
void readfromfile()
{
    student stu;
    cout << "data read from file are : ";
    ifstream infile("reacord.data", ios::binary);
    while (!infile.eof())
    {
        if (infile.read(reinterpret_cast<char *>(&stu); sizeof(stu) > 0))
            stu.show_data();
    }
}
int main()
{
    int choice;

    cout << "select one option below";
    cout << "\n 1. for writing to file";
    cout << "\n 2. for reading from file";
    cout << "\n 3. for exit from file ";
    while (true)
    {
        cout << "\n Enter your choice";
        switch (choice)
        {
        case 1:
            write2file();
            break;
        case 2:
            readfromfile();
            break;
        case 3:
            exit(0);
            break;
        deafult:
            cout << "\n wrong choice";
        }
    }
    return 0;
}