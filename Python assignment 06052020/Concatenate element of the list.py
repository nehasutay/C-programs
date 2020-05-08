list1=[]
list2=[]

for x in range(0,5):
    list1.append(int(input("Enter elements in 1st list")))
for x in range(0,5):   
    list2.append(int(input("Enter elements in 2nd list")))
    list3=list1+list2
print(list3)
