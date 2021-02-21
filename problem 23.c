#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,T;
    char S[100];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nPlease enter the any string : ");
        scanf(" %[^\n]",S);

        l = strlen(S);

        printf("%s : ",S);

        for(i=0;i<l;i++)
        {
            printf("%d",S[i]-64);
        }
        printf("\n");
    }

    return 0;
}
