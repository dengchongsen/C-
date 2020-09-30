#include<iostream>
using namespace std;
void func(int& a,int& b, int& c){
    int temp=b;
    temp=a;
    a=(a>b?a:b)>c?a:c;
    cout<<a<<b<<c<<endl;
}
int main()
{
    int a=1, b=2, c=3;
    func(a,b,c);
    return 0;
}