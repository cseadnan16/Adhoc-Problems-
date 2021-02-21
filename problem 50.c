#include<stdio.h>
#include<string.h>

int main()
{
    int i,length,T;
    char left_right[50];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nPlease enter the left_right value: ");
        scanf(" %[^\n]s",left_right);
        length = strlen(left_right);

        for(i=0;i<length;i++)
        {
            if(left_right[i]=='L' || left_right[i]=='R')
            {
                if(left_right[i]=='L')
                {
                    left_right[i]=left_right[i-1];
                }
                else
                {
                    left_right[i]=left_right[i+1];
                }
            }
            else
            {
                left_right[i]=left_right[i];
            }
        }

        for(i=0;i<length;i++)
        {
            printf("%c",left_right[i]);
        }
        printf("\n");
    }

    return 0;
}

