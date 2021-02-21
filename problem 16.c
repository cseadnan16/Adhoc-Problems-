#include<stdio.h>
#include<string.h>

void print_reverse(char word[]);

int main()
{
    int i,k,T;
    char S[10000],word[1002];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nPlease enter the any string : ");
        scanf("\n%[^\n]",S);

        for(i=0,k=0;i<strlen(S);i++)
        {
            if(S[i] != ' '){
                word[k]=S[i];
                k++;
            }
            else if(k>0){
                word[k]= '\0';
                print_reverse(word);
                k=0;
            }
        }

        if(k>0)
        {
            word[k]= '\0';
            print_reverse(word);
            printf("\n");
        }
    }
    return 0;
}

void print_reverse(char word[])
{
    int i;
    for(i=strlen(word);i>=0;i--){
        printf("%c",word[i]);
    }
}

