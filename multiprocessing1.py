from threading import *
from multiprocessing import Process
from os import *

def fun(no):
    print("Inside fun")
    print("fun process pid",getpid())
    print("fun parent pid",getppid())
    
def main():
    p1 = Process(target = fun,args = (4,))
    p1.start()
    print("main process pid ",getpid())
    print("main parent process pid ",getppid())

if __name__ =="__main__":        
    main()