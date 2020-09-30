#include<iostream>
using namespace std;
int main()
{
    const int a=1;
    const int b=2;
    const int *p;
    p=&b;
    cout<<*p<<endl;  //2
    // *p=5;  // error *p 不是可以修改的左值
    p=&a;
    cout<<*p<<endl; //1
    int c=520;
    int * const ip = &c;
    // ip=&b; //error *ip 是不可修改的左值
    cout<<*ip<<endl;
    return 0;
}