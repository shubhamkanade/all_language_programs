#include<stdio.h>
void pattern_s()
{
        int i = 0,j=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=3;j++)
        {
            if( i==1 || i==3 || i==5)
                printf("* ");
            else if((i==2 && j==1)||(i==4 && j==3))
                printf("* ");
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
}
void pattern_h()
{
    int i = 0, j= 0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(j==1 || j==3)
                printf("* ");
            else if(i==3 && j==2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
int main()
{
    int i=0,j = 0;  
    char str[30];
    printf("Enter string\n");
    scanf("%s",str);

    if(str[i])
    
    return 0;
}