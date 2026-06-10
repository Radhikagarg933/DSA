#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=a[0];
    for(i=0;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    int sl=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>sl&&a[i]!=l)
        {
            sl=a[i];
        }
    }  if(sl==INT_MIN)
    {
        cout<<"no";
            }
            else
            {

            
      cout<<sl<<endl;
                }    return 0;
}
