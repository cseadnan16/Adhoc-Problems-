#include<stdio.h>

int main()
{
    int i,j,k,N,T;
    printf("Enter T: ");
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        printf("\nPlease enter the value of N: ");
        scanf("%d",&N);

        for(j=1;j<=N;j++)
        {
            for(k=1;k<=N;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
