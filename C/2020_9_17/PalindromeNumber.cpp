#include<iostream>
using namespace std;
bool isPalindrome(int x) {
    int rev=0, temp=0;  temp=x;
    while(temp>10){
        rev*=10;  rev+=temp%10;   temp/=10;
    }
    rev*=10+temp;
    if(rev==x)    return true;
    else return false;
}

int main(){
    int T;      cin>>T;
    while(T--){
        int a=0;  cin>>a;
        if(isPalindrome(a)) cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
    return 0;
}