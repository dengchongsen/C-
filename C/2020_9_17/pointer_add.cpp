#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        int arr[99]={0},n=0,flag=0,search_id=0,temp = 0;
        cin>>n;
        for(int i=0; i<n; ++i) cin>>arr[i];
        cin>>search_id;
        if(n%2==0) flag = n/2;
        else flag = (n-1) / 2;
        int *p = &arr[flag];
        p--;
        cout<<*p<<" ";
        p++;
        p++;
        cout<<*p<<endl;
        p=arr;
        search_id--;
        while(search_id--) p++;
        cout<<*p<<endl;
        
    }
    return 0;
}