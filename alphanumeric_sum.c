int main()
{
    char arr[] = "12hello3";
    int i =0 , sum = 0;

    for(i = 0;i< sizeof(arr);i++)
    {
        if(isdigit(arr[i]))
        {
            sum = sum  + arr[i] - '0';
        }
    }
    printf("%d ",sum);

    return 0;
}