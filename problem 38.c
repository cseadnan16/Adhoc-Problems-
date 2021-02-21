#include<stdio.h>

int main()
{
    int a,i,j,m,n,x,T;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter value of n & m: ");
        scanf("%d%d",&n,&m);

        x=(2*n)-1;
        for(i=1;i<=x;i++)
        {
            if(i<=n)
            {
                for(j=1;j<=i;j++)
                {
                    printf(" %d",m);
                    a=j;
                }
                printf("\n");
            }
            else
            {
                for(j=1;j<a;j=j+1)
                {
                    printf(" %d",m);
                }
                a=a-1;
                printf("\n");

            }
        }
    }

    return 0;
}
