#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int *p[3];
        p[0] = &a; p[1] = &b; p[2] = &c;
        for(int j=0; j<2; ++j){
            for(int k=j+1;k<3; ++k ){
                if(*p[j]<*p[k]){
                    int *p;
                    p = 
                    p[j]; p[j] = p[k]; p[k] =p;
                }
            }
        }
    }

}