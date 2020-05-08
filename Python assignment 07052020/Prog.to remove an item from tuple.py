t=('d','v','g','t','u','a','c','z')
print(t)
t1=t[:3]+t[3:]
print(t1)
l=list(t1)
l.remove('z')
t1=tuple(l)
print(t1)
