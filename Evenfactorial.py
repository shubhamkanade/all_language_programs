def Evenfactorial(number):
        fact = 1
        while(number != 0):
            if(number % 2 == 0):
                fact = fact * number
                number -= 2
            else:
                number = number-1
        return fact
                
number = int(input("Enter a number"))
result = Evenfactorial(number)

print("the factorial is ", result)