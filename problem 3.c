#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1000;i>=1;i--)
    {
        printf("%d\t",i);
        if(i%5==0)
        {
            printf("\n");
        }

    }
    return 0;
}
