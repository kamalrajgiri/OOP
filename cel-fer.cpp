// WAP to convert celcius temprature in ferhneite temprature
#include <iostream>
using namespace std;
class celcius
{
public:    float temp;
    celcuis()
    {
        temp = 0;
    }
    celcius(int k)
    {
        temp = k;
    }
    void display()
    {
        cout << "temprature in celcius degree : " << temp;
    }
};
class ferhneite
{
    float fern;

public:
    ferhneite()
    {
        fern = 0;
    }
    ferhneite(celcius cel)
    {
        fern = (9 * cel.temp / 5) + 32;
    }
    void display()
    {
        cout << "\n temprature in ferhneite degree : " << fern;
    }
};
int main()
{
    celcius cel(37);
    ferhneite fer;
    fer = ferhneite(cel);
    cel.display();
    fer.display();
    return 0;
}