#include<stdio.h>

int main()
{
    int i,n,sum,T;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nn: ");
        scanf("%d",&n);

        sum = 0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum = sum+i;
            }
        }
        //printf("Sum is : %d\n",sum);

        if(sum==n)
        {
            printf("YES, %d is a perfect number!\n",n);
        }

        else
        {
            printf("NO, %d is not a perfect number!\n",n);
        }
    }
    return 0;
}
