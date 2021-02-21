#include<stdio.h>

int main()
{
    int i,n,T,temp,zero_count;

    printf("T = ");
    scanf("%d",&T);
    while(T--)
    {
        printf("\nEnter N: ");
        scanf("%d",&n);

        zero_count=0;
        for(i=5;i<=n;i=i+5)
        {
            zero_count++;
            //printf("1st Zero is: %d\n",zero_count);
            temp=i/5;
            while(temp>=5 && temp%5==0)
            {
                temp=temp/5;
                zero_count++;
                //printf("2nd Zero is: %d\n",zero_count);
            }
        }
        printf("Ending Zero is: %d\n",zero_count);
    }
    return 0;
}
