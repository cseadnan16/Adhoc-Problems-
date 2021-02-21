#include<stdio.h>

int main()
{
    int i,j,n,T,find;

    printf("T = ");
    scanf("%d",&T);
    while(T--)
    {
        printf("\nn = ");
        scanf("%d",&n);
        int a[n];
        printf("Enter the value of array: ");
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=1;i<=n;i++)
        {
            find=0;
            for(j=0;j<n-1;j++)
            {
                if(i==a[j])
                {
                    find=1;
                }
            }
            if(find==0)
            {
                printf("Missing number: %d\n",i);
                break;
            }
        }
    }
    return 0;
}
