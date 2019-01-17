#include<bits/stdc++.h>
using namespace std;
struct node
{
    int n;
    struct node *l=NULL;
    struct node *r=NULL;
};
struct node *root = new node;
int insert(struct node *t,int n)
{
    if(t->n>n)
    {
        if(t->l!=NULL)
            insert(t->l,n);
        else{
            struct node *x =new node;
            x->n=n;
            t->l=x;
        }
    }
    else
    {
        if(t->r!=NULL)
            insert(t->r,n);
        else{
            struct node *x =new node;
            x->n=n;
            t->r=x;
        }
    }
}
int display(struct node *t)
{
    if(t->l!=NULL)
        display(t->l);
    cout<<t->n<<" ";
    if(t->r!=NULL)
        display(t->r);
}
int main()
{
    root->n=0;
    while(1)
    {
        int a;
        cout<<"1.insert 2.display\n";
        cin>>a;
        switch(a)
        {
            case 1: int n;
                    cin>>n;
                    insert(root,n);
                    break;
            case 2:
                display(root);
                break;
            default: exit(0);
                     break;

        }
    }
}
