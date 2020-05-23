my_lsit = [2,3,5,7,11]

#squared_list =

# print( [x**2 for x in my_lsit if x%2 != 0])

# a = [2,5,7]

# b = [4,6,8]

# print(type(a))

add = lambda a,b:a+b

print(add(3,4))


def add(n):
    return lambda a:a+n

add = add(4)
print(add(3))

def mul(m):
    return lambda b: m*b

res = mul(8)
print(res(5))

from copy import copy,deepcopy

list_1 = [1, 2, [3, 5], 4]

list_2 = deepcopy(list_1)

print(id(list_1))
print(id(list_2))

print("----------------------------------")
list_1 = [1, 2, [3, 5], 4]

## shallow copy

list_2 = copy(list_1) 
list_2[3] = 7
list_2[2].append(6)

print(list_2)    # output => [1, 2, [3, 5, 6], 7]
print(list_1 )   
