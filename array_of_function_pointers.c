#include<stdio.h>
int add(int,int);
int sub(int,int);
int mult(int,int);
int div(int,int);

int main()
{
    int (*arr[4])(int,int) = {add,sub,mult,div};

    for(int icnt = 0;icnt < 4 ;icnt++)
        arr[icnt](6,2);
    return 0;
}
int add(int no1,int no2)
{
    printf("Addition is %d\n",no1 + no2);
}

int sub(int no1,int no2)
{

    printf("Subtraction is %d\n",no1 - no2);
}
int mult(int no1,int no2)
{

    printf("Multiplication is %d\n", no1 * no2);
}
int div(int no1,int no2)
{
    printf("Division is %d\n",no1 / no2);
}