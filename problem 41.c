#include<stdio.h>


int main()
{
    int n,T;
    float i,sum,fact;
    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter value of n: ");
        scanf("%d",&n);

        sum=0,fact=1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
            sum =sum+(i/fact);
        }
        printf("Result = %0.4f\n",sum);

    }

    return 0;
}


