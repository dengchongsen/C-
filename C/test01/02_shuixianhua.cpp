#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a=0,arr[5],i=0,total=0;
    cin>>a;
    int flag=a;
    for(i=0; a>10; ++i){
        arr[i] = a%10;
        a/=10;
    }
    arr[i]=a;
    for(int j=0; j<i+1; ++j){
        total += pow(arr[j],3);

    }
    if(total==flag) cout<<1<<endl;
    else cout<<0<<endl;
    return 0;

}