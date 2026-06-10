#include<iostream>
using namespace std;
void print(int n)
{ int i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                cout<<j+1;
            }
            cout<<endl;
        }

}
void print1(int n)
{ int i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            for(j=0;j<2*i+1;j++)
            {
                cout<<"*";
            }
            for(j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            cout<<endl;
        }

}
void print2(int n)
{ int i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                cout<<" ";
            }
            for(j=0;j<2*n-(2*i+1);j++)
            {
                cout<<"*";
            }
            for(j=0;j<i;j++)
            {
                cout<<" ";
            }
            cout<<endl;
        }

}
void print4(int n)
{ int i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
               if(i%2==0&&j%2==0)
               {
                cout<<"1";
               }
               else if(i%2!=0&&j%2!=0)
               {
                cout<<"1";
               }
               else{
                cout<<"0";
               }
            }
            cout<<endl;
        }

}
void print10(int n)
{
    int i;
    char ch;
    for(i=0;i<n;i++)
    {
        for(ch='A'+i;ch<='A'+i;ch++)
    {
        cout<<ch<<endl;

    }
    cout<<endl;
    }
}
void print20(int n)
{ int i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<(n-i);j++)
            {
                cout<<"*";
            }
            for(j=0;j<i*2;j++)
            {
                cout<<" ";
            }
            for(j=0;j<(n-i);j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }

}
int main()
{
    int n;
    cin>>n;
    print20(n);
    return 0;
}