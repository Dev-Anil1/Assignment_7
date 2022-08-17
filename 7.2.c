int main()
{
    int a,b,i,z,n;
    printf("ENter n th terms here = ");
    scanf("%d",&n);
    a=-1;
    b=1;
    for(i=1;i<=n;i++)
    {
        z=a+b;
        a=b;
        b=z;
        printf(" %d ",z);
    }
    getch();
    return 0;
}

