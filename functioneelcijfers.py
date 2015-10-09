cijfers = open("cijfers.txt","r")
cijfers2 = open("cijfers.txt","r")
cijfersplit = cijfers.read().split()
cijfersplit2 = cijfers2.read().split()
for elem in cijfersplit:
    if len(elem)>4:
        cijfersplit.remove(elem)

for elem in cijfersplit:
    if len(elem)>4:
        cijfersplit.remove(elem)

for elem in cijfersplit:
    if len(elem)>4:
        cijfersplit.remove(elem)

lijst = [float(i.replace(',','.')) for i in cijfersplit]


print(sum(lijst)/len(lijst))
#print(len(cijfersplit))
#print(len(cijfersplit2))