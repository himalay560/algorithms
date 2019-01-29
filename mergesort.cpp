#include<bits/stdc++.h>
using namespace std;
int ml(int a[],int l, int m, int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=a[i+l];
    for(j=0;j<n2;j++)
        R[j]=a[j+m+1];
    i=j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        k++;
        j++;
    }
}
int mergesort(int a[],int l, int r)
{
    if(l<r)
    {
        int m;
        m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        ml(a,l,m,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
