s=input()
n=len(s)
for i in range(n):
    for j in range(i,n):
        for k in range(i,j+1):
            print(s[k],end="")
        print(" ")
