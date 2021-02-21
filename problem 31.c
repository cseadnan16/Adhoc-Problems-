#include<stdio.h>

int main()
{
    int i,n,m,sum,T;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nm: ");
        scanf("%d",&m);

        for(n=1;n<=m;n++)
        {
            sum = 0;
            for(i=1;i<n;i++)
            {
                if(n%i==0)
                {
                    sum = sum+i;
                }
            }

            if(sum==n)
            {
                printf("%d\n",n);
            }
        }

    }

    return 0;
}

