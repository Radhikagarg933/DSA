/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d;
    cin>>d;
    int x;
    cin>>x;
    int ans=0;
    if(d%2==0)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                ans+=x;
            }
        }
    }
    else{
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                ans+=x;
            }
        }
    }
    cout<<ans;
    return 0;
}
