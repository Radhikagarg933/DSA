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
    cout<<l<<endl;
    return 0;
}