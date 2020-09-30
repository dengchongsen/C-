#include<iostream>
#include "./ch_6_2_2.cpp"
using namespace std;
void fn();
// extern int n;
int main(){
    n=20;
    n++;
    cout<<n<<&n<<endl;
    fn();
    return 0;
}
