import reverse

def checkpalindrome(number):

        result = reverse.Reverse_number(number)
        
        if(result == number):
            return True
        else:
            return False
        
def main():
    number = int(input("Enter a number\n"))
    
    if(checkpalindrome(number)== True):
        print("%d number is palindrome" % number)
    else:
        print("%d is not a palindrome number" % number)

if __name__ == "__main__":
    main()