#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n,i,j,l,k;
    n=s.length();
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
                cout<<s[k];
            cout<<"\n";
        }
    }
}
