//4. WAP to show the concept of exception mechanism handling B
#include<iostream>
using namespace std;
void calculate ()
{
    int a,b;
    cout <<"Enter values of a and b \n";
    cin>>a>>b;
    if (b==0)
    throw b;
    cout<<"Quotent = "<<a/b;
}
int main ()
{
    try
    {
        calculate ();
    }
    catch(int k)
    {
        cout<<"\n Divison by zero is not possible so correct it";
    }
    cout<<"\n programme ended";
    return 0;
}