#include<stdio.h>
#include<stdlib.h>
int* Copyarray(int arr[],int size)
{
    int i = 0, j = 0 , *p = NULL;

    if(arr == NULL || size <= 0)
        return NULL;

    p = (int*)calloc(size,sizeof(int));

    for(i = size - 1;i >= 0; i--)
    {
        p[j++] = arr[i];
    }
    return p;

}
int main()
{
    int i = 0,*arr = NULL , *p =NULL;

    arr = calloc(5 ,sizeof(int));
    printf("Enter values\n");
    for(i = 0;i<5 ;i++) 
        scanf("%d",&arr[i]);
    p = Copyarray(arr,5);

    printf("Reverse array is\n");
    for(i = 0;i<5 ;i++)
        printf("%d ",p[i]);
    
    return 0;
}