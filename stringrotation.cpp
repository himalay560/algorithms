#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,j=0;
    cin>>n;
    char** s;
    s=(char**)malloc(sizeof(char**)*n);  //2d pointer array(dynamic)
    for(int i=0;i<n;i++)
    {
        s[i]=(char*)malloc(100);    //declaring size of each row
        cin>>s[i];
    }
    // for anticlockwise rotation
    for(int i=1;i<=n;i++)
    {
        x=n;
        while(x--)
        {
            cout<<s[j%n]<<" ";    //prints every string
            j++;                    //increments the position of string in one line
        }
        j++;                        //starts from next string to print
        cout<<endl;
    }
    cout<<"\n\n\t*******\n\n";
    //for clockwise rotation
    for(int i=0;i<n;i++)
    {
        x=n;
        while(x--)
        {
            cout<<s[(j+(n-i))%n]<<" ";   // print the string in cyclic order
            j++;
        }
        cout<<endl;
    }
}
