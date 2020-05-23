numbers = []

n = int(input("Enter N elements"))

for i in range(0,n):
    numbers.append(int(input("Enter number")))

print(numbers)

icnt = 0
number = int(input("Enter the number to be count"))

for i in numbers:
    if(number == i ):
        icnt += 1

print("%d digit occurs %d times" % (number,icnt))