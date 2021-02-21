#include<stdio.h>
#include<string.h>

int main()
{
    int i,N,T,rem;
    char S[100];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("Enter the Number = ");
        scanf(" %[^\n]",S);
        N = strlen(S);

        for(i=N-1;i>=0;i--)
        {
            printf("%c",S[i]);
        }

        /*printf("\nEnter value of N: ");
        scanf("%d",&N);

            while(N!=0)
            {
                rem = N%10;
                printf("%d",rem);
                N = N/10;
            }*/
            printf("\n");
    }

    return 0;
}

