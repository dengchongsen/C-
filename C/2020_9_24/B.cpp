#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int m=0, n=0,min=9999,max=0;
        cin>>m>>n;
        const int size = m*n;
        int *p = new int[size];
        int *q =p;
        for(int i=0; i<size; i++){ 
            cin>>*p;
            if(*p<min) min=*p;
            if(*p>max) max=*p;
            p++;
        }
        
        cout<<min<<" "<<max<<endl;
        delete [] q; 
    }
    return 0;
}