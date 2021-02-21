#include<stdio.h>

int main()
{
    int i,j,T;
    int count[26];
    char S[1000];

    printf("T = ");
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        printf("\nPlease enter the any word : ");
        scanf(" %[^\n]s",S);

        for(j=0;j<26;j++)
        {
            count[j]=0;
        }
        for(j=0;j<strlen(S);j++)
        {
            if(S[j]>='a' && S[j]<='z')
            {
                count[S[j]-'a']++;
            }
        }

        for(j=0;j<26;j++)
        {
            if(count[j] != 0)
            {
                printf("%c = %d\n",'a'+j,count[j]);
            }
        }
    }
    return 0;
}
