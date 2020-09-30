#include<iostream>
using namespace std;
void func(int n){
    char *p[] = {"error","January","February","March","April","May","June","July","Aguest","September","October","November","December"};
    if(n>=1&&n<=12){
        cout<<p[n]<<endl;
    }
    else cout<<p[0]<<endl;
    
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        func(n);
    }
    return 0;

}