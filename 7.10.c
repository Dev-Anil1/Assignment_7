#include<stdio.h>
#include<math.h>
int main()
{
    int n=1000,a,b,count=0,rem;
    int sum=0;
    a=n;
    while(a)
    {
        b=a;
        while(b)
        {
            b=b/10;
            count++;
        }
        b=a;
        while(b)
        {
            rem=b%10;
            sum=sum+pow(rem,count);
            b=b/10;
        }
        if(sum==a)
            printf("%d ",sum);
        sum=0;
        rem=0;
        count=0;
        a--;
    }
    return 0;
}
