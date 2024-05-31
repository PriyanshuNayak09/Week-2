#include <bits/stdc++.h> 
using namespace std; 
  
int mostFrequent(int arr[], int n) 
{ 
    // code here 
    int mcount=0; 
    int m_el=0; 
    for (int i=0; i<n; i++)
    { 
        int count=0; 
        for (int j=0; j<n; j++)
        { 
            if (arr[i]==arr[j])
            {
                count++;
            } 
        } 
  
        if (count>mcount)
        { 
            mcount = count; 
            m_el = arr[i]; 
        }
    }
    return m_el; 
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
    cout<<"The most occuring integer is "<<mostFrequent(arr, n)<<endl; 
    return 0; 
} 