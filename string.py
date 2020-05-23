import sys
msg1 = "Hello world"
msg2 = "Python programming"

print(msg1[1:5])
print(msg1[:-1])

print(msg2[1:5])

str = "programming"

print(str[5:-2])
print("Command line argument")
for i in sys.argv:
    print(i)
    
print(" i love {0} and {1}".format('apples','milk'))
print("i love {1} and {0}".format('apples',"milk"))

while 0:
    print (5)