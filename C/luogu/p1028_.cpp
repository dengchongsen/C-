// 递推

#include<iostream>
using namespace std;
int func(int n){
    if(n==1) return 1;
    else if(n==2) return  2;
    else{
        if(n%2==1) return func(n-1);
        else return func(n-1) + func(n/2);
    }
}
int main()
{
    int n;
    cin>>n;
    int res = func(n);
    cout<<res<<endl;;
    return 0;
}