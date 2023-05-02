#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
    /* data */
    char name[20];
    int age;
public:
    Person();
    Person(char n[],int a);
    ~Person();
void display(){
    cout<<"NAME: "<< name <<endl;
    cout<<"AGE: "<< age <<endl;
}
};


Person::Person()
{
    cout<<"default";
}
Person::Person(char n[],int a)
{
    strcpy(name,n);
    age =a;
}

Person::~Person()
{
}
