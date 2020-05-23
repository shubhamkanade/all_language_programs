#include<stdio.h>
struct Hello
{
    int i;
    float f;
    struct Demo
    {
        int j;
        double d;
    };
    double d;
};
int main()
{
    struct Hello hobj;
    printf("%ld",sizeof(hobj));

    return 0;
}