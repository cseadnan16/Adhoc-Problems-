#include<stdio.h>

int main()
{
    int r1,r2,b,kase,T;
    double current_r_r,required_r_r,played_over,remaining_over;
    printf("T = ");
    scanf("%d",&T);
    for(kase=0;kase<T;kase++)
    {
        printf("\nEnter the value r1 r2 & b: ");
        scanf("%d%d%d",&r1,&r2,&b);

        played_over = (300-b)/6.0;
        remaining_over = b/6.0;

        current_r_r = r2/played_over;
        required_r_r = ((r1-r2)+1)/remaining_over;

        printf("Current run rate = %0.2lf\n",current_r_r);
        printf("Required run rate = %0.2lf\n",required_r_r);
    }
    return 0;
}
