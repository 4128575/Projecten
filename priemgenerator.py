import timeit

limiet = int(input('Bovenlimiet? '))

start_time = timeit.default_timer()

lijst = [1] * limiet
lijst2 = []
for i in range(2, int((limiet+1)/2)+1):
    for k in range(2, int(limiet/i)+1):
        lijst[k*i-1] = 0
for j in range(2, limiet):
    if lijst[j-1] == 1:
        lijst2.append(j)
        
print(timeit.default_timer() - start_time)
#print(lijst2)
print('Hoi mama!')