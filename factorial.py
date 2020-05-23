def factorial(num):
    if num == 0:
        return -1
    elif num <= 0:
        return -2
    else:
        ans = 1
        for i in range(1,num+1):
            ans *= i
        return ans

def main():
    num = int(input("Enter a number to calculate factorial"))
    print("The factorial is ",factorial(num))   
    
main()