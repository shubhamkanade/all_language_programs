#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ***ptr=NULL;
    int x=0, y =0 ,z = 0;
    int icnt1 = 0,icnt2 = 0, icnt3 = 0;
    
    printf("enter 1st dimension\n");
    scanf("%d",&x);
    printf("Enter 2nd dimension\n");
    scanf("%d",&y);
    printf("Enter 3rd dimension\n");
    scanf("%d",&z);

    //Allocate the memory
    ptr = (int***)malloc(x * sizeof(int**));

    for(icnt1 = 0;icnt1 < x;icnt1++)
        ptr[icnt1] = (int**)malloc(y * sizeof(int*));
    
    for(icnt1 = 0;icnt1 < x;icnt1++)
    {
        for(icnt2 = 0;icnt2 < y ;icnt2++)
        {
            ptr[icnt1][icnt2]=(int*)malloc(z * sizeof(int));
        }
    }

    //Accept the elements

    for(icnt1 = 0;icnt1 < x; icnt1++)
    {
        for(icnt2 = 0;icnt2 < y;icnt2++)
        {
            for(icnt3 = 0;icnt3 < z; icnt3++)
                {
                    scanf("%d",&ptr[icnt1][icnt2][icnt3]);
                }
        }
    }

    printf("dISPLAY THE ELEMENSTS\n");
    for(icnt1 = 0;icnt1 < x; icnt1++)
    {
        for(icnt2 = 0;icnt2 < y;icnt2++)
        {
            for(icnt3 = 0;icnt3 < z; icnt3++)
                {
                    printf("%d ",ptr[icnt1][icnt2][icnt3]);
                }
        }
    }

    for(icnt1 =0;icnt1 < x;icnt1++)
    {
        for(icnt2 = 0;icnt2 < y ;icnt2++)
        {
            free(ptr[icnt1][icnt2]);
        }
    }

    for(icnt1=0;icnt1 < x ;icnt1++)
        free(ptr[icnt1]);

    free(ptr);
    

    return 0;
}