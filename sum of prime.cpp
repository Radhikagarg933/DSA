/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int o=n;
   int s=n*n;
   int temp=s;
   int d;
   int ans=0;
   int p=1;
   while(n>0)
   {
       d=temp%10;
        ans=ans+d*p;
       temp=temp/10;
       n=n/10;
       p=p*10;
   }
   if(ans==o){
  
        cout<<"auto";
        }
        else
        {
            cout<<"no";
}
return 0;
}
