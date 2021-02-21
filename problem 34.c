#include<stdio.h>

int main()
{
    int i,j,A,B,C,T;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("Enter the value of A, B & C: ");
        scanf("%d%d%d",&A,&B,&C);

        for(i=A;i<=C;i++)
        {
            if(i%A==0 && i%B==0)break;
        }
        for(j=i;j<=C;j=j+i)
        {
            printf("%d\n",j);
        }
    }

    return 0;
}

