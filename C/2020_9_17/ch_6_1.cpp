#include<iostream>
#include "./ch_6_1_1.cpp"
using namespace std;
void fn1();
void fn2();
int n;
int main()
{
    n=3;
    fn1();
    cout<<n;
    return 0;
}
void fn1(){
    fn2();
}