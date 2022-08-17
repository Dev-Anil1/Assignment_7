int main()
{
    int i,n,flag,a,b;
    printf("Enter a number");
    scanf("%d",&a);
    for(n=a;n<=b;n++)
    {
        if(n==1)
            continue;
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
                flag=1;
                break;
        }
    }
    if(flag==0)
            printf("%d ",n);
    getch();
    return 0;
}

