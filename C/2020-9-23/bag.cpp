// 0-1背包问题 暴力解法
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int n=0, w[99]={0}, v[99]={0}, c=0; //c为背包容量
    cin>>n>>c;//输入物品的种类和背包容量
    for(int i=1; i<=n; ++i){
        cin>>w[i]>>v[i]; // 输入每一种物品的重量和价值 从第一件开始
    }
    const int totalSet = pow(2,n); //物品的总选择数量
    int t[100] = {0} ; //  0表示不选这件物品
    int maxV = 0; // 存储子集的最大价值
    // 开始遍历子集
    for(int j=1; j<totalSet; ++j ){
        int temp = j, index = 1, val = 0, weight = 0; //temp表示当前子集的序号
        for(int k =1; k<=j; ++k) t[k]=0; //选的物品清零
        //开始确认是否选这件物品，从第一件开始
        // 转换成二进制
        while(temp>0){
            if(temp%2==1){
                t[index] = 1 ;
                weight += w[index];
                val += v[index];
                if(weight>c) break;
            }
            index++;
            temp  >>= 1; //游标右移 
        }

        if(weight<=c&&val>=maxV){
            maxV = val;
        }
    }
    cout<<maxV<<endl;

    return 0;
}