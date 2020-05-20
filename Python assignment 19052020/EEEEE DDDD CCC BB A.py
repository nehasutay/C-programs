num=69
for r in range(5,0,-1):
    for c in range(0,r):
        ch=chr(num)
        print(ch,end="")
    num=num-1
    print()
