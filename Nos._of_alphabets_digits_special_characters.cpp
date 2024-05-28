#include <iostream>
using namespace std;
int main()
{
    string c;
    int i,a=0,d=0,s=0;
    cout<<"enter the string: ";
    cin>> c;
    for(i=0;c[i]!='\0';i++)
    {
        if((c[i] >='A' && c[i]<='Z') || (c[i]>='a' && c[i]<='z'))
        {
            a++;
        }
        else if(c[i]>='0' && c[i]<='9')
        {
            d++;
        }
        else if(c[i]==' ')
        {
            continue;
        }
        else
        {
            s++;
        }
    }
    cout<<"The number of alphabets are:"<<a<<endl;
    cout<<"The number of digits are:"<<d<<endl;
    cout<<"The number of special characters are:"<<s<<endl;
    return 0;
}