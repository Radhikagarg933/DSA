#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&a,int n,int i)
{
    int max=i;

    int l=2*i+1;
    int r=2*i+2;

    if(l<n && a[l]>a[max])
    {
        max=l;
    }

    if(r<n && a[r]>a[max])
    {
        max=r;
    }

    if(max!=i)
    {
        swap(a[i],a[max]);
        heapify(a,n,max);
    }
}

void heap(vector<int>&a,int n)
{
    int i;

    // Build max heap
    for(i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
    }

    // Extract elements
    for(i=n-1;i>0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
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

    heap(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}