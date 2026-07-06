#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void selection(int a[],int n)
{
    int i ,j;
    for(i=0;i<=n-2;i++)
    {
       int min=i;
        for(j=i;j<=n-1;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
           
        } swap(a[i],a[min]);
    }

}
void insert(int a[],int n)
{
    int i,j;
    for(i=0;i<=n-1;i++)
    { j=i;
        while(j>0&&a[j]<a[j-1])
        {
            swap(a[j-1],a[j]);
            j--;
        }
    }
}

int part(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l;
    int j = h;

    while(i < j)
    {
        while(i < h && a[i] <= pivot)
            i++;

        while(j > l && a[j] > pivot)
            j--;

        if(i < j)
            swap(a[i], a[j]);
    }

    swap(a[l], a[j]);
    return j;
}

void  qs(int a[],int l,int h)
{
    if(l<h)
    {
        int p=part(a,l,h);
        qs(a,l,p-1);
        qs(a,p+1,h);
    }
}
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
qs(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    return 0;


}
