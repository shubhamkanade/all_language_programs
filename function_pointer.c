#include<stdio.h>

int add(int,int);
int sub(int,int);
int main()
{
    int no1 = 0,no2 = 0,ret = 0;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&no1,&no2);

    int (*fptr)(int,int) ;
    fptr = add;

    fptr = sub; 

    ret = fptr(no1,no2); //it will call to sub function
    printf("The subtraction is %d",ret);
    return 0;
}
int add(int no1,int no2)
{
    return no1+no2;
}
int sub(int no1,int no2)
{

    return (no1 - no2);
}