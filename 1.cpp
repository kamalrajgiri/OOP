#include <iostream>
using namespace std;
class celcius
{
public:
    float  fer,temp;
    celcius()
    {
        temp = 0;
    }
    int getdata( ) 
    {
        int p;
        cout << "enter temprature in celcius"; 
        cin >> p;
        temp = p;
    }
    operator float()
    {
        //float fer;
        fer = (temp * 9 / 5) + 32;
        return (fer);
    }
    void showdata()
    {
        cout << "the temprature in ferneight is " << fer;
    }
};
int main()
{
    celcius cel;
    cel.getdata();
    float fer;
    fer = cel;
    cel.showdata();
    return 0;
}