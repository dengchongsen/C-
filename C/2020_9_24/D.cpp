#include<iostream>
#include<cstring>
using namespace std;
int isNumber(char *p, int len){
    int i=0,flag=0;
    for( i=0; i<len; ++i){
        if((*p<'0')||(*p>'9')) break;
        flag = 10*flag+(*p-48);
        p++;
        
    }
    if(i!=len) return -1;
    else{
        return flag;
    }

}
int main(){
    int T;
    cin>>T;
    while(T--){
        char str[99];
        cin>>str;
        int len = 0;
        len=strlen(str);
        cout<<isNumber(str,len)<<endl;

    }
    return 0;
}