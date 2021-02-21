#include<stdio.h>

int main()
{
    int i,N,T;
    char S[10000];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("Enter value of N: ");
        scanf("%d",&N);

        for(i=1;i<=N;i++)
        {
            printf("Please enter the value of string: ");
            scanf(" %[^\n]",S);
        }
        for(i=1;i<=N;i++)
        {
            puts(S);
        }
    }
}
