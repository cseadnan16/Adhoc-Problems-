#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,a,T,count;
    char letter,S[10000];


    printf("T = ");
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        printf("\nPlease Enter the any sentence: ");
        scanf(" %[^\n]",S);
        printf("Chose your any letter: ");
        scanf(" %c",&letter);

        count=0;
        for(j=0;j<strlen(S);j++)
        {
            if(letter==S[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n",letter,S,count);
        }
        else
        {
            printf("'%c' is not present.\n",letter);
        }
    }

    return 0;
}
