int main()
{
    int i,n,flag,a,b;
    printf("Enter two number here ");
    scanf("%d%d",&a,&b);
    for(n=a;n<=b;n++)
    {
        if(n==1)
            continue;
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(flag==0)
            printf("%d ",n);
    }
    getch();
    return 0;
}

