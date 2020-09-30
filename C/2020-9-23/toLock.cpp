// 狱吏问题算法
#include<iostream>
using namespace std;
int main()
{
    int n;  cin>>n;
    int a[99];
    // 初始化锁的状态   1为开
    for(int i=1; i<=n; ++i) a[i]=1;
    for(int k=1; k<=n; ++k)
        for(int j=k; j<=n; j+=k){
            a[j]=1-a[j];  //更改锁的状态
        } 
    for(int res=1; res<=n; ++res){
        if(a[res]==0) cout<<res<<endl; //输出上锁的牢房
    }
    return 0;
}