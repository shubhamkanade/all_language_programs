#include<stdio.h>
#include<stdlib.h>
int* copy_array(int*,int);

int main()
{   
    int size =0 ,icnt = 0, *arr= NULL , *result = NULL;
    printf("Enter N elements\n");
    scanf("%d",&size);

    arr = (int*)calloc(size,sizeof(int));
    printf("Enter elements\n");
    for(icnt = 0;icnt< size;icnt++)
        scanf("%d",&arr[icnt]);
    
    result = copy_array(arr,size);

    for(icnt = 0;icnt < size;icnt++)
        printf("%d ",result[icnt]);
    return 0;
}
int* copy_array(int *brr,int size)
{
    int *temp =NULL;
    if(brr == NULL || size <= 0)
        return NULL;

    temp = (int*)calloc(size,sizeof(int));
    for(int icnt= 0;icnt < size; icnt++)
        temp[icnt] = brr[icnt];
    
    return temp;
}