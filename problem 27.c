#include<stdio.h>

int main()
{
    int i,n,x,y,T,rem;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nn : ");
        scanf("%d",&n);
        y = n;
        x=0;
        i=1;
        while(n>0)
        {
            rem = n%10;
            i = rem*rem*rem;   //অথবা এই লাইনটা "rem +=(rem*rem*rem)" এইভাবেও লেখা যেত, অর্থাৎ গুন এবং যোগের কাজ এক সাথে
            x = x+i;
            n /= 10;  //অথবা  n= n/10 এইভাবে লিখলেও হবে
        }

        if(y == x)
        {
            printf("%d is an armstrong number!\n",y);
        }
        else
        {
            printf("%d is not an armstrong number!\n",y);
        }

    }
    return 0;
}
