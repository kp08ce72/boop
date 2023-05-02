// to perform all arithmetic operation on two integers scanned from user.

#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter two number :";
    cin>>n1>>n2;
    cout<<"Addition of two numbers :"<<n1+n2<<endl;
    cout<<"Subtraction of two numbers :"<<n1-n2<<endl;
    cout<<"Multiplication of two numbers :"<<n1*n2<<endl;
    cout<<"Division of two numbers :"<<float(n1)/n2<<endl;
    cout<<"Modulo of two numbers :"<<n1%n2<<endl;
    return 0;
}
