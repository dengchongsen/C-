#include<iostream>
using namespace std;
int mul(int x){
    int total;
    for(total=1; x>1; --x){
        total *=x;
    }
    return total;
}
int main(){
    int a,flag=0;
    cin>>a;
    for(int y=1; y<=a; y++){
        flag += mul(y);
    }
    cout<<flag<<endl;
    return 0;
}