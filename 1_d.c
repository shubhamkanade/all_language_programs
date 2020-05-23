#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *ptr = NULL;

    printf("Enter how many elements\n");
    scanf("%d",&size);

    ptr=(int*)malloc(size*sizeof(int));

    printf("Enter elements\n");
    for(int icnt=0;icnt<size;icnt++)
        scanf("%d",&ptr[icnt]);

    printf("The elements are\n");
    for(int icnt=0;icnt<size;icnt++)
        printf("%d ",ptr[icnt]);

    free(ptr);

    return 0;
}