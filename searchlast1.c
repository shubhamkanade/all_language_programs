#include<stdio.h>
#include<stdlib.h>
int searchlast(int* ,int,int);

int main()
{
    int icnt = 0,*ptr = NULL;
    int size = 0 , ret = 0 , number = 0;

    printf("Enter N elements");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

    printf("Enter elements\n");
    for(icnt = 0;icnt < size ;icnt++)
        scanf("%d",&ptr[icnt]);
    
    printf("Enter the number to search\n");
    scanf("%d",&number);

    ret = searchlast(ptr,size,number);

    printf("Element is at position %d",ret);
    free(ptr);
    return 0;
}

int searchlast(int *arr,int size,int number)
{
        int icnt = 0;
        if(arr == NULL || size <= 0)
            return -1;
        for(icnt = size - 1;icnt >= 0 ;icnt--)
        {
            if(arr[icnt]==number)
                break;
        }
        return icnt;
        
}