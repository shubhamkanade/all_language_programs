# j = 0
k = 1
for i in range(1,7,1):
    # print(i)
    for j in range(1,7-i,1):
        print(k,end = ' ')
        k = k+1
    print()
    k = 1