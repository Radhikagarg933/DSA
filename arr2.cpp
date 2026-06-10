#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
    cin>>n;
    vector<int>a(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    
    cout<<a[n-2];
}