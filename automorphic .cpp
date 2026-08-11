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
   int s=n*n;
   int temp=s;
   int d;
   while(d<n)
   {
       d=temp%10;
       temp=temp/10;
   }
   string st=to_string(d);
  reverse(st.begin(),st.end());
    int num=stoi(st);
    if(num==n)
    {
        cout<<"auto";
        }
        else
        {
            cout<<"no";
}
return 0;
}
