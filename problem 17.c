#include<stdio.h>

int main()
{
    int i,T,count;
    char S[1000];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nPlease enter the any string : ");
        scanf(" %[^\n]s",S);

        count=0;
        for(i=0;i<strlen(S);i++)
        {
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            {
                count++;
            }
        }
        printf("Numbers of vowels = %d\n",count);
    }
    return 0;
}
