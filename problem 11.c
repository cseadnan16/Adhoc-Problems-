#include<stdio.h>

int main()
{
    int i,n,kase,T,zero;
    long long int fact;
    printf("T = ");
    scanf("%d",&T);
    for(kase=0;kase<T;kase++)
    {
        printf("\nEnter n: ");
        scanf("%d",&n);
        for(i=2,fact=1;i<=n;i++)
        {
            fact = fact*i;
        }
        printf("Factorial value = %lld\n",fact);

        zero = 0;
        while(fact>0)
        {
            //zero = 0;
            if(fact%10==0)
            {

                zero++;
                //printf("ZERO = %d\n",zero);
            }

            else if(fact%10 != 0)
            {
                break;
            }
            fact=fact/10;
            //printf("fact value is: %lld\n",fact);

        }
        printf("Ending Zero(0) digit is: %d\n",zero);
    }
    return 0;
}
