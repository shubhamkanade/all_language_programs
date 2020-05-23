#include<stdio.h>
int main()
{
    int i = 0, j =0;
    int arr[] = {1,2,3,4,5};
    int brr[] = {10,20,3,40,5};

    for(i = 0;i < 5;i++)
    {
        for(j= 0 ;j< 5 ;j++)
        {
            if(arr[i] == brr[j])
            {
                printf("%d ",arr[i]);
            }
        }
    }
    


    return 0;
}