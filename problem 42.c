#include<stdio.h>

int main()
{
    int i,n,T;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter the n: ");
        scanf("%d",&n);

        for(i=n;i>=0;i--)
        {
            if(i==0)
            {
                printf("%d",i+1);
            }
            else if(i<2)
            {
                printf("%d + ",i+1);
            }
            else
            {
                printf("2^%d + ",i);
            }

        }
        printf("\n");
    }
}
