#include<iostream>
using namespace std;
int main(){
    int a = 42486;
    cout<<oct<<a<<endl
        <<hex<<a<<endl;
    unsigned short b=42486;
    cout<<oct<<b<<endl
        <<hex<<b<<endl<<"¶ş½øÖÆ"<<endl;
    int arr[99]={0}, cnt=0;
    for(int i=0; a>=2; ++i){
        if(a==3){
            arr[i]=1;
            arr[i+1]=1;
            cnt+=2;
        }
        else if(a==2){
            arr[i]=0;
            arr[i+1]=1;
            cnt+=2;
            break;
        }
        else{
        arr[i]=a%2;
        a /= 2;
        cnt++;
        }
    }
    for(;cnt>=0;--cnt){
        cout<<arr[cnt];
    }
    return 0;
}