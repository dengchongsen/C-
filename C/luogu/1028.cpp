// 暴力解法

#include<iostream>
using namespace std;
int res = 1;
void  func(int n){
    for(int i = 1; i<=n/2; ++i){
        res++;
        func(i);
    }
}
int main()
{
    int n;
    cin>>n;
    func(n);
    cout<<res<<endl;;
    return 0;
}