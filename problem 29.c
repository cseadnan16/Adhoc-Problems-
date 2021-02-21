#include<stdio.h>

int main()
{
    int T;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        char x;
        printf("\nx : ");
        scanf(" %c",&x);

        if(x>='a' && x<='z')
        {
            printf("Lowercase character.\n");
        }

        else if(x>='A' && x<='Z')
        {
            printf("Uppercase character.\n");
        }

        else if(x>='0' && x<='9')
        {
            printf("Numerical digit.\n");
        }

        else
        {
            printf("Special character.\n");
        }
    }
    return 0;
}
