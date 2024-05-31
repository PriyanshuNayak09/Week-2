#include <iostream>
using namespace std;

int count(int arr[] , int n ,int num)
{
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int x, num;
    cout<<"enter the size of array: ";
    cin>>x;
    int arr[x];

    cout<<"enter the elements:";
    for(int i=0; i<x;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter the number whose no. of occurence needs to be known: ";
    cin>>num;

    cout<<"The number "<<num<<" is repeated "<<count(arr,x,num)<<" times.";
    return 0;
}