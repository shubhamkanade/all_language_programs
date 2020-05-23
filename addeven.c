#include<stdio.h>
#include<stdlib.h>
int AddEven(int *arr,int size)
{   
        int sum = 0;
        for(register int i=0;i<size;i++)
        {
            if(arr[i]%2 == 0)
                sum+=arr[i];
        }
        return sum;
}
int main()
{
    int *ptr = NULL;
    int icnt = 0,size =0,sum=0;

    printf("Enter N elements\n");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

    printf("Enter elements");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }

    sum = AddEven(ptr,size);
    printf("The addition is %d\n",sum);
    return 0;    
}