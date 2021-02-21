#include<stdio.h>

int main()
{
    int n1,n2,n3,kase,temp,T;

    printf("T = ");
    scanf("%d",&T);
    for(kase=0;kase<T;kase++)
    {
        printf("\nPlease enter the n1 n2 & n3 values: ");
        scanf("%d %d %d",&n1,&n2,&n3);
        if(n1>n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
            printf("Case %d: %d %d %d\n",kase+1,n1,n2,n3);
        }
        else if(n1>n3)
        {
            temp= n1;
            n1 = n3;
            n3 = temp;
            printf("Case %d: %d %d %d\n",kase+1,n1,n2,n3);
        }
        else if(n2>n3)
        {
            temp =n2;
            n2 = n3;
            n3 = temp;
        }
        printf("Case %d: %d %d %d\n",kase+1,n1,n2,n3);
    }
    return 0;
}
