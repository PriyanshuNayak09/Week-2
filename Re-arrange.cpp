#include <iostream>
using namespace std;

void arrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    arrange(arr, n);

    cout<<"The re-arranged elements of the array are: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}