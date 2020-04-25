num=int(input('Enter 5 digit number'))
n1=num%10
num=num//10
n2=num%10
num=num//10
n3=num%10
num=num//10
n4=num%10
num=num//10
n5=num%10
res=n1+n2+n3+n4+n5
print('Addition of all digits',res)
