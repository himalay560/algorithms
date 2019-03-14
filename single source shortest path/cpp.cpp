#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter number of nodes : ";
    int n;
    cin>>n;
    int b[n][n];
    cout<<"\nenter the cost between 2 nodes in the form of matrix :\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>b[i][j];
    int a[n];
    //here we consider 1st node as source node
    for(int i=0;i<n;i++)
        a[i]=b[0][i];
    for(int i=1;i<n;i++)
    {
        if(a[i]!=99) // here in input we consider 99 as infinity
        {
            for(int j=1;j<n;j++)
            {
                if(i==j)
                    continue;
                if(b[i][j]!=99)
                    a[j]=min(a[j],b[i][j]+a[i]);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
