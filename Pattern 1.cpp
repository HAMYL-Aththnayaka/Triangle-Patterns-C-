/*************************************************************
Print the following patterns using nested for loop in c++:
    Pattern 1:
    *
    **
    ***
    ****
    *****
    ******
    *******

    Pattern 2:
    *******
    ******
    *****
    ****
    ***
    **
    *

    *************************************************************/

#include <iostream>
using namespace std;
int main ()

{
    for (int i=0; i<7; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}

