#include<stdio.h>

int main()
{
    int i,n,T,num,missing;
    int a[100001];
    printf("T = ");
    scanf("%d",&T);
    while(T--)
    {
        printf("\nn = ");
        scanf("%d",&n);


        for(i=0;i<=n;i++)
        {
            a[i]=0;
        }

        printf("Chose your number: ");
        for(i=1;i<n;i++)
        {
            scanf("%d",&num);
            a[num]=1;
        }

        for(i=1;i<=n;i++)
        {
            if(a[i]==0)
            {
                missing = i;
                break;
            }
        }
        printf("Missing number: %d\n",missing);
    }
    return 0;
}
