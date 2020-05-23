def Reverse_number(number):
    
        rev = 0
        digit = 0
        
        while (number != 0):
            
            digit = number % 10
            rev = rev  * 10 + digit
            number //= 10
            
        return rev

def main():        
    value = int(input("Enter number to reverse\n"))
    
    print("Reverse number is %d" % Reverse_number(value))
    
if __name__ == "__main__":
    main()