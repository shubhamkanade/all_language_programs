from threading import *
from os import *

def run(no):
    print("iN RUN MEthod")
    print("run method process thred id",getpid())
    print("rrun method parent id",getppid())
    
def main():
    t1 = Thread(target = run(5),args = (5,))
    t1.start()
    print("main method process id",getpid())
    print("main method parent id",getppid())

if __name__ == "__main__":
    main()