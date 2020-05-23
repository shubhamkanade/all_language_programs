# import reduce;

arr = [2,4,1,5,7,8]
sum = 0
def findeven(no):
    if(no % 2 == 0):
        return no

def modify(no):
    return no + 2

def add(no1, no2):
    return no1 + no2

brr = list(filter(findeven,arr))
print(brr)
crr = list(map(modify,brr))
print(crr)
# drr = reduce(add,crr)









d = {0:10 , 1:20 , 2:30}

for i in d:
    print(i , d[i])
    
str = "saurabh is my brother"

arr = str.split(" ")

print(arr)

crr = " ".join(arr)
print(crr)
