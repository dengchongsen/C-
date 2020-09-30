#include<iostream>
#include<cstring>
using namespace std;
inline void read(int n, int a[]){
    for(int i=0; i<n; ++i) a[i]=i;
}
int main()
{
    int arr[10];
    read(10,arr);
    memset(arr,0,10*sizeof(int));
    return 0;
}