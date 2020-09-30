// 汉诺塔问题
#include<iostream>
using namespace std;
// 把第n个盘子，从A移动到B，借助C
void hanoi(int n, char A, char B, char C){
    if(n==1){
        cout<<"move disk "<<n<<" from "<<A<<" to "<<B<<endl;
    }
    else {
        hanoi(n-1,A,C,B); // 把n-1个盘子从A移动到C，借助B
        cout<<"move disk "<<" from "<<A<<" to "<<B<<endl; // 把第n个盘子从A移动到B
        hanoi(n-1,C,B,A); // 把n-1个盘子从C移动到B，借助A

    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
            int n;
            cin>>n;
            cout<<"hanoi"<<endl;
            hanoi(n,'A','B','C');

    }
    return 0;
}