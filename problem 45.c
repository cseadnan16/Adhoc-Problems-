#include<stdio.h>
int main()
{
    int i,j,n,T;
    long long int pascal[51][51];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter n: ");
        scanf("%d",&n);

        for(i=0;i<=n;i++)
        {
                for(j=0;j<=i;j++)
                {
                    if(j==0 || j==i)
                    {
                        pascal[i][j] = 1;
                        printf(" %lld",pascal[i][j]);
                    }
                    else
                    {
                        pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j];
                        printf(" %lld",pascal[i][j]);
                    }
                }
                printf("\n");
        }
    }

    return 0;
}

