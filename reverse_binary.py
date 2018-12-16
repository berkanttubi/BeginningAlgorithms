a= input("Enter the binary: ")

a=list(a)
b=""
for i in a[::-1]:
    b=b+i
print(b)
