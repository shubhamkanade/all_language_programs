def count_digit(number):
    
    icnt = 0
    while ( number != 0 ):
        icnt += 1
        number //= 10
    
    return icnt

def main():
    
    number = int(input("enter a number"))
    
    print("The digits are %d " % count_digit(number))

if __name__ == "__main__":
    main()