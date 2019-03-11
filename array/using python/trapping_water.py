#code
for i in range(int(input())):
    t=int(input())
    b=list(map(int,input().split()))
    l=[0]*t
    r=[0]*t
    l[0]=b[0]
    r[t-1]=b[t-1]
    ans=0
    for i in range(1,t):
        l[i]=max(b[0:i+1])
        r[i]=max(b[i:t])
    for i in range(t-1):
        if(min(l[i],r[i])-b[i]>=0):
            ans+=min(l[i],r[i])-b[i]
    print(ans)    