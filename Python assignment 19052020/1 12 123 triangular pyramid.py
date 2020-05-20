for r in range(1,4):
    for t in range(1,5-r):
        print(" ",end=" ")
    for c in range(r,0,-1):
        print(" ",c,end=" ")
    print()
