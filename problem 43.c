#include<stdio.h>
#include<math.h>

int main()
{
    int p,q,c,temp,result,T;
    double i,sqr;
    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter p,q & c: ");
        scanf("%d%d%d",&p,&q,&c);

        sqr = sqrt(q);
        for(i=1,temp=1;i<=sqr;i++)
        {
            temp = (temp*p)%c;
        }

        printf("Result = %d\n",temp);
    }
    return 0;
}

