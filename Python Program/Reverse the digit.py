num=int(input('Enter three digit number'))
n1=num%10
num=num//10
n2=num%10
num=num//10
n3=num%10
rev=(n1*100+n2*10+n3*1)
print('After reversing',rev)
