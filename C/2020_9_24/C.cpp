#include<iostream>
using namespace std;

void func(int *a,int *b,int *c){
    int arr[3];
    int temp=0;
    arr[0]=*a;
    arr[1]=*b;
    arr[2]=*c;
    for(int i=0; i<2; i++)
        for(int j=i+1; j<3;++j){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    for(int i=0; i<3; ++i){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,c;
        cin>>a>>b>>c;
        func(&a,&b,&c);
        cout<<endl;
    }
    return 0;
}