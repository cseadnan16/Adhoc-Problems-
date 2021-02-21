#include<stdio.h>
int main()
{
    int i,l,T;
    char S[1000];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nPlease enter the any string : ");
        scanf("%[^\n]s",S);

        l=strlen(S);

        printf("\nVowels letter is : ");
        for(i=0;i<l;i++)
        {
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            {
                printf("%c",S[i]);
            }
        }

        printf("\n");

        printf("and Consonants letter is : ");
        for(i=0;i<l;i++)
        {
            if(S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u' && S[i] != ' ')
            {
                printf("%c",S[i]);
            }
        }
        printf("\n");

    }

    return 0;
}

