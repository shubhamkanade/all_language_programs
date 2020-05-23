string =  "googgo"

dict = {}
for s in string:
    if s in dict:
        dict[s] += 1
    else:
        dict[s] = 1

print(dict)

pow2 = [2 ** x for x in range(10)]
print(pow2)

for x in range(1,10):
    print(2 ** x)