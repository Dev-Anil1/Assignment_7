int main()
{
    int i,n,flag=0;
    for(n=1;n<=100;n++)
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
