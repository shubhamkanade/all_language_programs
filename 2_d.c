#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **ptr=NULL;
    int row = 0, col = 0,icnt1 = 0,icnt2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&row);

    printf("Enter number of columns\n");
    scanf("%d",&col);

    ptr = (int**)malloc(row*sizeof(int*));

    for(icnt1=0;icnt1<row;icnt1++)
        ptr[icnt1]=(int*)malloc(sizeof(int));
    
    //Accept the data
    printf("Enter  elements");
    for(icnt1=0; icnt1<row; icnt1++)
    {
        for(icnt2=0;icnt2<col;icnt2++)
        {
            scanf("%d",&ptr[icnt1][icnt2]);
        }
    }

    //print the data
    for(icnt1=0; icnt1<row; icnt1++)
    {
        for(icnt2=0;icnt2<col;icnt2++)
            printf("%d ",ptr[icnt1][icnt2]);
    }

    for(icnt1= 0;icnt1<row;icnt1++)
        free(ptr[icnt1]);

    free(ptr);
    return 0;
}
