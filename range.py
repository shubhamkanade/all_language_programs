def display(value):

    if(value == 4):
        return 25000
    elif(value == 5):
        return 15000
    elif(value == 6 or value == 7):
        return 22000
    elif(value >= 9 or value <= 15):
        return 31000
    else:
        return 0

def main():
    
    n = int(input("Enter value"))
    print(display(n))

if __name__ == "__main__":
    main()