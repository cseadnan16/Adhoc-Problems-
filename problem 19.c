#include<stdio.h>

int main()
{
    int i,j,T,count;
    char S[10000];

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf(" %[^\n]s",S);

        count=0;
        for(j=0;S[j]!='\0';j++)
        {
            if(S[j] == ' ')
            {
                count++;
            }
        }

        printf("Count = %d\n",count+1);
    }

    return 0;
}
