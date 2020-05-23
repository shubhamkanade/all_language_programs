def sub(num1,num2):
    return num1-num2

def decorator(orignalfunc):
    def updator(a,b):
        if(a < b):
            a,b = b,a
        return orignalfunc(a,b)
    return updator

result = decorator(sub)
print(result(10,7))
print(result(7,10))