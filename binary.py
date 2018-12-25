
a= int(input("Enter an integer: "))
n1=0
n2=1
counter=2
d=[0,1]
e=""

while counter!= a:

    x=n1+n2
    n1=n2
    n2=x
    d.append(x)
    counter+=1

for i in d:
    e = e + str(i)
print(e)


