n = int(input("Enter a number"))

for i in range(2,int((n+1)/2)):
    if(n % i == 0):
        print("not prime")
        break
    
else:
    print("it is prime")