#include<stdio.h>
int main()
{
    int a,b,t,T,lcm,gcd,value;

    printf("T = ");
    scanf("%d",&T);
    while(T--)
    {
        printf("\nEnter value of a & b : ");
        scanf("%d%d",&a,&b);
        value = a*b;

        while(b != 0)
        {
            t = b;
            b = a % b;
            //printf("b = %d\n",b);
            a = t;
            gcd = a;
        }

        lcm = value/gcd;
        printf("LCM = %d\n",lcm);
    }
    return 0;
}
