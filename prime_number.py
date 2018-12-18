
null=[]
a=int(input("Enter the integer: "))

c=[x for x in range(2,a) if all(x % y != 0 for y in range(2, x))]

for t in c:
    if a%t ==0:
        null.append(t)
print(null)

