#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    int carr[n];

    cout<<"Enter elements of the original array: ";
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        carr[i] = arr[i];
    }

    cout << "Elements of the copied array : ";
    for (int i = 0; i < n; i++)
    {
        cout << carr[i] << " "<< endl;
    }
    return 0;
}