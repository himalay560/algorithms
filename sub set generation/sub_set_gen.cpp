#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n,m,j,i;
    n=s.length();
    m=pow(2,n);
    for(i=1;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i & 1<<j)
                cout<<s[j]<<" ";
        }
        cout<<"\n";
    }
}
