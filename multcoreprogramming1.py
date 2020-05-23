from multiprocessing import *
from os import *

def mult(no):
    print("mult process pid",getpid())
    return no*2

def main():
    arr = [8,6,4,2]
    print("main process id ",getpid())    
    obj = Pool()
    result = obj.map(mult,arr) 
    print(result)
main()   