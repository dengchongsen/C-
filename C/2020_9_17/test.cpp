#include<iostream>
#include<string.h>
using namespace std;

int compare(char* p1, int len1, char* p2, int len2)
{
 int a = 0;
 int b = 0;
if (len1 > len2)
  {
   return 1;
  }
if (len1 < len2)
  {
   return -1;
  }
else 
  {
   for (int i = 0; i < len1; i++)
   {
    if (*(p1 + i) > *(p2 + i))
    {
     a++;
    }
    else if (*(p1 + i) < *(p2 + i))
    {
     b++;
    }

    if (a > b)
    {
     return 1;
    }
    else if (a < b)
    {
     return -1;
    }
    else
    {
     return 0;
    }
   }
  }
}

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  char str1[100];
  char str2[100];
  cin >> str1;
  cin >> str2;
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  cout << compare(str1, len1, str2, len2) << endl;
  
 }
 return 0;
}