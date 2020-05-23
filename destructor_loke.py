a= 20
b = a
c = [b]

print(id(a))
print(id(b))
print(id(c))

del a
print(id(a))