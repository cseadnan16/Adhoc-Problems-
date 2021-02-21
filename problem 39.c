#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,T,count;
    char S[100];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter the any word: ");
        scanf(" %[^\n]",S);
        l = strlen(S);

        count=0;
        for(i=0,j=l-1;i<l,j>=0;i++,j--)
        {
            //printf("i=%c and j=%c\n",S[i],S[j]);

            if(S[i]==S[j])
            {
                count++;
            }
            else
            {
                printf("Sorry! It is not palindrom!\n");
                break;
            }
        }
        if(count==l)
        {
            printf("Yes! It is palindrom!\n");
        }

    }
    return 0;
}
