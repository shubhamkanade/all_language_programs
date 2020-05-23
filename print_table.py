def displaytable(digit):

    for i in range(1,11):
        print(digit,"*",i,"=", (digit*i))
    

def main():

    digit = int(input("Enter a digit"))

    displaytable(digit)
    
if __name__ == "__main__":
    main()    
    