x=input("Enter the number")

y=""

for i in list(x)[::-1]:
    y=y+i

if x==y:
    print(x,"is a palindrome.")

else:
    print("It is not.")
