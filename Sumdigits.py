number = int(input("enter a number to add it's digits"))
sum = 0
while(number != 0):
    digit = number%10
    sum = sum + digit;
    number = number // 10

print("sum is",sum)