def calculate_avarage(a,n):

    avg = 0
    sum = 0
    for i in range(n):
        num = int(input("Enter element"))
        a.append(num)
        sum = sum  + a[i]
    
    return (sum / n)        
          
def main():
    n = int(input("Enter n number"))
    a = []
    result = calculate_avarage(a,n)
    print(result)
    
if __name__ =="__main__":
    main()
    