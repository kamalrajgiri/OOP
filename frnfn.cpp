#include<iostream>
using namespace std;
class arrayclass
{
    int a[10];
    float avg;
    public:
    void get_data();
    friend void average(arrayclass);
};
void arrayclass:: get_data()
{
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
} 
void average(arrayclass a1)
{
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum+=a1.a[i];
        a1.avg=sum/10;
    }
    cout<<" average="<<a1.avg;

}
int main()
{
    arrayclass obj;
    cout<<"enter 10 integers \n";
    obj.get_data();
    average(obj);
    return 0;
}