#include<bits/stdc++.h>
using namespace std;
//function to find minimum of 3 values
int min(int a,int b,int c)
{
    if(a<b)                 //if a is smaller than b that means the smallest number will be either a or c
    {
        if(a<c)
            return a;
        else
            return c;
    }
    else                    //if a is greater than b that means the smallest number will be either b or c
    {
        if(b<c)
            return b;
        else
            return c;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int s[n][m],a[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        for(int i=0;i<n;i++)
            s[i][0]=a[i][0];    //paste the 2 outer sides of matrix as it is in a new matrix
        for(int j=0;j<m;j++)
            s[0][j]=a[0][j];
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(a[i][j]==1)
                    s[i][j]=min(s[i-1][j],s[i][j-1],s[i-1][j-1])+1;     //checks the side three points and takes the minimum value from it as to form a square and adds 1 to it
                else
                    s[i][j]=0;
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]>c)
                    c=s[i][j];      //finding largest square sub matrix
            }
        }
        cout<<c*c<<endl;   //no of ones in a largest square from
    }
}
