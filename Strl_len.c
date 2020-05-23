#include<stdio.h>

int main()
{
    char arr[30];
    int ret = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    ret = countlen(arr);

    printf("%d",ret);
    return 0;
}
int countlen(char *arr)
{   
    int icnt = 0;
    if(arr == NULL)
        return -1;

    while(*arr != '\0')
    {
        arr++;
        icnt++;
    }

    return icnt;;

}