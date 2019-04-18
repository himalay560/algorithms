import itertools as it
s=input()
n=len(s)
l=[]
for i in range(1,n+1):
    m=list(it.combinations(s,i))
    l.append(m)
for i in l:
    for j in i:
        k=len(j)
        for h in range(k):
            print(j[h],end="")
        print(" ")
