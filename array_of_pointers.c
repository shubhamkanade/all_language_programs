#include<stdio.h>
int main()
{
    int a =10,b=20,c=40;

    int* arr[3] = {&a,&b,&c};

    printf("%d %d %d",*arr[0],*arr[1],*arr[2]);

    return 0;
}