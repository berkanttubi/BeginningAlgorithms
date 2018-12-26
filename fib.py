a= int(input("Enter the nth: "))
n1=0
n2=1
fib=0
x=1
while x!=a:
    fib=n1+n2
    n1=n2
    n2=fib
    x+=1
print(fib)
