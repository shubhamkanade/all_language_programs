#include<stdio.h>
int add(int,int);
int sub(int,int);
//void calling_function(int,int,int(*)(int,int));
void calling_function(int no1,int no2,int(*fun)(int,int))
{
    fun(no1,no2);
}
int main()
{
    calling_function(8,5,add);  

    return 0;
}
int add(int no1,int no2)
{
    printf("Addition is %d\n",no1 + no2);
}

int sub(int no1,int no2)
{

    printf("Subtraction is %d\n" ,no1- no2);
}