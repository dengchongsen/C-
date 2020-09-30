#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const double Pi = 3.1415926;
    int T;
    cin>>T;
    while(T--){
        double r=0, area=0;
        cin>>r;
        area = Pi*r*r;
        cout<<setfill('*')<<setw(10)<<Pi<<endl
            <<r<<endl
            <<area<<endl<<setfill(' ');
    }
    return 0;
}