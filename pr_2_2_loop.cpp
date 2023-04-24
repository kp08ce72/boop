// to print the following pattern using for loop

#include <iostream>
using namespace std;

int main()
{
    int c=1,i,j;
    for ( i = 0; i < 5; i++)
    {
        //loop to print space
        for (j = i;  j< 5; j++)
        {
            cout<<" ";
        }
        //loop to print number
        for (j = 0;  j<=i; j++)
        {
            cout<<c++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
