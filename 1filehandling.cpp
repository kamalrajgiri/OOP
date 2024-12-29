//WAp to write to file and read from file using the 
//concept of opening and closing of file using constructor and destructor
#include <iostream>
using namespace std;
#include<fstream>
int main()
{
    char name[25], email[30];
    ofstream outfile("contact.doc");
    cout << "Enter name \n";
    cin >> name;
    outfile << name;
    cout << "Enter email \n ";
    cin >> email;
    outfile << email;
    ifstream infile("contact.doc");
    infile >> name;
    infile >> email;
    cout << "\n Data read from file are : \n ";
    cout << "Name : " << name<<endl;
    cout << "Email : " << email;
    return 0;
}