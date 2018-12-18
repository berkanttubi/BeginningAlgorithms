a=eval(input("Enter the first integer:"))
b=eval(input("Enter the second integer:"))

x=[i for i in range(1,a*b) if i%a==0]
y=[i for i in range(1,a*b) if i%b==0]
c=[]
for t in x:
    for j in y:
        if j==t:
            c.append(j)
print("The least common multiple of %d and %d ="%(a,b),min(c))

