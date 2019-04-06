import math
print("enter number of nodes")
n=int(input())
l=[]
for i in range(n):
    a=[]
    for j in range(n):
        if(i==j):
            a.append(0)
        else:
            a.append(math.inf)
    l.append(a)
print("enter number of edges")
e=int(input())
i=1
while(e):
    e=e-1
    print("enter the data for edge ",i)
    i=i+1
    print("enter source ",end=" ")
    s=int(input())
    print("enter destination ",end=" ")
    d=int(input())
    print("enter cost ",end=" ")
    c=int(input())
    l[s-1][d-1]=c
for k in range(n):
    for i in range(n):
        for j in range(n):
            l[i][j]=min(l[i][j],l[i][k]+l[k][j])
for i in range(n):
    print(l[i])
    
