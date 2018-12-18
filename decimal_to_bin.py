a= eval((input("Enter an integer: ")))

b=[]
c=""
while(a!=0):

    b.append(a%2)
    a=a//2
for i in b[::-1]:
    c+=str(i)
print(c)
