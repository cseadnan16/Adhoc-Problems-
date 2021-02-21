#include<stdio.h>

int main()
{
    int i,n,T,sum,sum1,num,missing;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nn = ");
        scanf("%d",&n);

        for(i=1,sum=0;i<=n;i++)
        {
            sum=sum+i;
        }

        printf("Chose your number: ");
        for(i=1,sum1=0;i<n;i++)
        {
            scanf("%d",&num);
            sum1=sum1+num;
        }

        missing = sum-sum1;
        printf("Missing number: %d\n",missing);
    }
    return 0;
}
