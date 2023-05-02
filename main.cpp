/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "Person.cpp"
using namespace std;

int main()
{
    cout<<"Hello World 1";
    char name[20]="ravi";
    Person p1(name,8);
    p1.display();
    return 0;
}
