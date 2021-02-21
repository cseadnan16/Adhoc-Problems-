#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,T,length;
    char S[1000];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("Please enter the any string: ");
        scanf(" %[^\n]",S);
        length = strlen(S);
        //printf("Length is %d\n",length);

        for(j=length-1;j>=0;j--)
        {
            printf("%c",S[j]);
        }
        printf("\n");
    }
    return 0;
}
