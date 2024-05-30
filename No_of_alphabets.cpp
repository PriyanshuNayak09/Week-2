#include <iostream>
using namespace std;
int main()
{
    char str[100];
    int countA, countS, countD, countSC;
    int counter;

    countA = countD = countS = countSC = 0;

    cout<<"Enter a string: ";
    gets(str);

    for (counter = 0; str[counter] !='\0'; counter++) {

        if (str[counter] >= 'A' && str[counter] <= 'Z')
        {
            countA++;
        }
        else if (str[counter] >= 'a' && str[counter] <= 'z')
        {
            countA++;
        }
        else if(str[counter]==' ' )
        {
            countS++;
        }
        else if(str[counter]>='0' && str[counter]<='9')
        {
            countD++;
        }
        else 
        {
            countSC++;
        }
    }

    cout<<"Total Alphabet characters:"<<countA<<endl;
    cout<<"Total Numeric characters:"<<countD<<endl;
    cout<<"Total Special characters:"<<countSC<<endl;

    return 0;
}