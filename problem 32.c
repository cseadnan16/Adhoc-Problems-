#include<stdio.h>
int main()
{
    int i,N,T,X;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nX & N: ");
        scanf("%d%d",&X,&N);

        if(X>N)
        {
            printf("Invalid!\n");
        }
        else
        {
            for(i=X;i<=N;i+=X)
            {
                //if(i%X==0)
                //{
                    printf("%d\n",i);
                //}
            }
        }

    }
}
