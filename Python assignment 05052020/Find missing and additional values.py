list1=['a','b','c','d']
list2=['a','b','c','e']
list1.sort()
list2.sort()
miss=0
add=0
for x in range(0,4):
    if(list1[x]!=list2[x]):
        miss=list1[x]
        add=list2[x]
        print(miss,add)
