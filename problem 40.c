#include<stdio.h>


int main()
{
    int i,x,k,T,sum,power;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter value of x & k: ");
        scanf("%d%d",&x,&k);

        sum=1,power=1;
        for(i=1;i<=k;i++)
        {
            power = power*x;
            sum =sum+power;
        }
        printf("Result = %d\n",sum);

    }

    return 0;
}

