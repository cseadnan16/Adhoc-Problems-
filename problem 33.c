#include<stdio.h>

int main()
{
    int i,A,B,C,T;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d%d%d",&A,&B,&C);

        for(i=A;i<=B;i+=1)
        {
            if(i%C==0)break;
        }
        for(i=i;i<=B;i=i+C)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
