#include <iostream>
using namespace std;

template <class T>
const int size = 5;

template <class T>
class Array
{
protected:
    T arr[size];

public:
    void get_array();
    T find_max();
};

template <class T>
void Array<T>::get_array()
{
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

template <class T>
T Array<T>::find_max()
{
    T max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    Array<int> a1;
    a1.get_array();
    cout << "largest element = " << a1.find_max() << "\n";

    cout << "Enter float array \n";
    Array<float> a2;
    a2.get_array();
    cout << "largest element = " << a2.find_max() << "\n";

    return 0;
}