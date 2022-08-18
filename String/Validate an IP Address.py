Problem Description: https://practice.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1?page=1&category[]=Strings&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(1)

def isValid(s):
    #code here
    cn=0
    for i in s:
        if i=='.':
            cn+=1
    if cn!=3:

        return False
    a,b,c,d=s.split('.')
    alen=len(a)
    blen=len(b)
    clen=len(c)
    dlen=len(d)
    if alen==0 or alen>4 or blen>4 or clen>4 or dlen>4 or blen==0 or clen==0 or dlen==0:
        return False
    if a.isalpha() or b.isalpha() or c.isalpha() or d.isalpha():
        return False
    a=int(a)
    b=int(b)
    c=int(c)
    d=int(d)
    p=a
    q=b
    r=c
    s=d
    flag1=False
    flag2=False
    flag3=False
    flag4=False
   
    if alen!=1:
        flag1=True
        while(p):
            p=int(p/10)
            alen-=1
    if blen!=1:
        flag2=True
        while(q):
            q=int(q/10)
            blen-=1
    if clen!=1:
        flag3=True
        while(r):
            r=int(r/10)
            clen-=1
    if dlen!=1:
        flag4=True
        while(s):
            s=int(s/10)
            dlen-=1
    
    if (flag1 and alen!=0):
       
        return False
    if (flag2 and blen!=0):
       
        return False
    if (flag3 and clen!=0):
     
        return False
    if (flag4 and dlen!=0):
       
        return False
    if((a>=0 and a<=255) and (b>=0 and b<=255) and (c>=0 and c<=255) and (d>=0 and d<=255)):
       
        return True
    else:
        return False
        
