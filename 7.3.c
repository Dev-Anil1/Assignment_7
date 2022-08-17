int main()
{
    int a,b,i,z,n;
    printf("ENter a number to search = ");
    scanf("%d",&n);
    a=-1;
    b=1;
    for(i=1;;i++)
    {
        z=a+b;
        a=b;
        b=z;
        if(z==n)
        {
            printf("number found");
                break;
        }
        if(z>n)
        {
            printf("not found");
                break;
        }
    }

    getch();
    return 0;
}


