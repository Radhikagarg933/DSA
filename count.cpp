#include<bits/stdc++.h>
using namespace std;

void csort(vector<int >&a,int n)
{
    int i;
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    vector<int>count(max+1,0);
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    int j=0;
    for(i=0;i<=max;i++)
    {
        while(count[i]>0)
        {
              a[j]=i;
              j++;
              count[i]--;
        }
    }

}

int main()
{
    int n;
    cin>>n;

    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   csort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}