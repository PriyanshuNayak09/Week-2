#include <iostream>
using namespace std;
int main()
{
    int s1, s2;

    cout<<"Enter the size of the 1st array: ";
    cin>>s1;
    int arr1[s1];

    cout<<"Enter elements of the 1st array : ";
    for(int i = 0; i < s1; i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter the size of the 2nd array: ";
    cin>>s2;
    int arr2[s2];

    cout<<"Enter elements of the 2nd array : ";
    for (int i = 0; i < s2; i++)
    {
        cin>>arr2[i];
    }

    int nsize=s1+s2;
    int narr[nsize];

    for (int i=0; i<s1; i++)
    {
        narr[i]=arr1[i];
    }

    for (int i=0; i<s2; i++)
    {
        narr[s1+i]=arr2[i];
    }

    cout<<"Merged array in reverse order : ";
    for (int i= nsize-1; i>=0; i--)
    {
        cout<<narr[i]<<", ";
    }
    cout<<endl;
    return 0;
}