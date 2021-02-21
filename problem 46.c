#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,T;
    double s,area;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter a,b & c: ");
        scanf("%d%d%d",&a,&b,&c);

        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));

        printf("Area = %0.3lf\n",area);
    }

    return 0;
}
