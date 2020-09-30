#include<iostream>
using namespace std;
int func1(){
    int n=12345;
    cout << &n << endl;
    return n;
}

int func2(){
    int m;
    cout << &m << endl;
    return m;
}
int main(){
    func1();
    cout<<"1."<<func1()<<endl<<func2()<<endl;
    return 0;
}