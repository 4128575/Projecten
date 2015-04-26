import timeit
start_time = timeit.default_timer()

listprime2 = []
limiet = int(input('Bovenlimiet? '))
for i in range (1,limiet):
    x = i + 1
    for j in range(2, x):
        if i%j == 0:
            if i != j:
                break
        if i%j == 0:
            if i == j:
                listprime2.append(i)
                
print(timeit.default_timer() - start_time)
#print(listprime2)