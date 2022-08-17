int main()
{
    int a,b,i,hcf;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    int min = a < b ? a : b ;
    for(i=1;i<=min;i++)
    {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }
    printf("Hcf is %d",hcf);
    getch();
    return 0;
}
