#include<bits/stdc++.h>
using namespace std;
void msort(vector<int>&a,int l,int mid,int h)
{
    int left=l;
    int right=mid+1;
    vector<int>temp;
    int i;
    while(left<=mid&&right<=h)
    {
        if(a[left]<=a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else if (a[right]<=a[left])
        {
            temp.push_back(a[right]);
            right++;
        }
    }
        while(left<=mid)
        {
            temp.push_back(a[left]);
            left++;
        }
        while(right<=h)
        {
            temp.push_back(a[right]);
            right++;
        }
        int j=0;
        for(i=l;i<=h;i++)
        {
            a[i]=temp[j];
            j++;
        }
    
}
void merge(vector<int>&a,int l,int h)
{
    int mid=(l+h)/2;
    if(l<h)
    {
        merge(a,l,mid);
        merge(a,mid+1,h);
        msort(a,l,mid,h);
    }
    
    
}   
    int main()
{
    int n;
    cin>>n;
    int i;
  vector<int>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    merge(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}