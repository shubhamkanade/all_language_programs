def sum_digits(number):
    
    sum = 0
    while(number != 0):
        
        sum = sum + (number % 10)
        number //= 10
    
    return sum

def main():
    
    number = int(input("Enter a number\n"))
    
    result = sum_digits(number)
    
    print("The sum of digits of number is %d" % result)

if __name__ == "__main__":
    main()