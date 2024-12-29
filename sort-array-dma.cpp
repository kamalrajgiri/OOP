/*WAP to sort an integer array in ascending order using DMA*/
#include<iostream>
using namespace std;
int main ()
{
    int i,j,temp,*ptr;
    ptr= new int [5];
    cout<<"enter 5 integer";
    for (i=0;i<4;i++)
    {
        cin>>ptr[i];
    }
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if (ptr [i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    cout<<endl<<"Integers in ascending order : ";
    for(i=0;i<4;i++)
    cout<<ptr[i]<<"\t";
    delete [] ptr;
    return 0;
}