import sys

n = int(sys.argv[1])
print("n is ",n)
if n in range(1,51):
    print("in range")
else:
    print("n is",n)
    
    print("Not in range")
    
mylist = [1,2,3,4,5]

print(mylist[::-1])