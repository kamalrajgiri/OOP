// WAP to find largest element of an array using class template
/*#include <iostream>
using namespace std;

template <class t>
const int size = 5;

template <class t>
class array
{
    t arr[size];
public:
    void get_array();
    t find_max();
};
template <class t>
void array<t>::get_array()
{
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}
template <class t>
t array<t>::find_max()
{
    t max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    array<int> a1;
    a1.get_array();
    cout << "largest element = \n";
    a1.find_max();
    cout << max;
    cout << "Enter float array \n";
    array<float> a2;
    a2.get_array();
    cout << "\n largest element = \n";
    a2.find_max();
    cout << max;
    return 0;
}*/
#include <iostream>
using namespace std;

template <class T>
const int size = 5;

template <class T>
class Array
{
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