#include<iostream>
using namespace std;
int main()
{
  /*
    int T=1;
    int **p = new int*[2];
    for(int i=0; i<2;i++){
        p[i] = new int[3];
    }
    for(int i=0; i<2; ++i)
        for(int j=0; j<3; ++j)
        {
            p[i][j]=T;
            T++;
        }

    for(int i=0; i<2; ++i){
        for(int j=0; j<3; ++j){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    delete [] p;
   */
    //方式2创建
   int *p = new int [5*3];
   //赋值
   for(int i = 0;i < 5*3;i ++)
   {
       p[i] = i;
   }
   //输出
   for(int i = 0; i < 5; i ++)
   {
       for(int j = 0; j < 3; j ++)
       {
           cout<<p[i*3 + j]<<" ";
       }
       cout<<endl;
   }   
    return 0;
}