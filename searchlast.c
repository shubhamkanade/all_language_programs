#include<stdio.h>
#include<stdlib.h>

int Searchlast(int arr[],int size,int number)
{
    int icnt = 0;

    for(icnt = size -1;icnt >= 0;icnt--)
        if(arr[icnt]==number)
            break;
    return icnt;
}
int main()
{
    int *ptr=NULL;
    int size = 0,icnt = 0,ret = 0,number = 0;

    printf("Enter N elements\n");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

    printf("Enter %d elements ",size);
    for(icnt = 0;icnt < size ;icnt++)
        scanf("%d",&ptr[icnt]);

    printf("Enter the number to search\n");
    scanf("%d",&number);

    ret = Searchlast(ptr,size,number);

    printf("%d",ret);
    return 0;
}