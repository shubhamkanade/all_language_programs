#include<stdio.h>
#include<stdlib.h>

void Add(int* ,int);
int main()
{
    int size = 0, icnt = 0,*ptr = NULL;

    printf("Enter N elements\n");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

    printf("Enter N elements %d",size);
    for(icnt = 0;icnt < size;icnt++)
        scanf("%d",&ptr[icnt]);


    Add(ptr,size);

    free(ptr);
    return 0;
}
void Add(int arr[],int size)
{   
    int icnt = 0,start = 0,end = 0;
    if(arr == NULL || size <= 0)
        return;

    // for(start = 0,end = size-1;start < end ;start++,end--)
    // {
    //     printf("%d ",(arr[start]+arr[end]));
    // }
        start = 0;
        end = size - 1;

        while (start < end)
        {   
            printf("%d ",(arr[start]+arr[end]));
            start++;
            end--;
        }

}