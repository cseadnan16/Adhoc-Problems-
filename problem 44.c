#include<stdio.h>
int main()
{
    int i,j,n,T;
    int even[21],odd[21];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter n: ");
        scanf("%d",&n);

        for(i=1;i<=n+1;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<=i-1;j++)
                {
                    if(j==0 || j==i-1)
                    {
                        even[j]=1;
                        printf(" %d",even[j]);
                    }
                    else
                    {
                        even[j]=odd[j-1]+odd[j];
                        printf(" %d",even[j]);
                    }
                }
                printf("\n");
            }
            else
            {
                for(j=0;j<=i-1;j++)
                {
                    if(j==0 || j==i-1)
                    {
                        odd[j]=1;
                        printf(" %d",odd[j]);
                    }
                    else
                    {
                        odd[j]=even[j-1]+even[j];
                        printf(" %d",odd[j]);
                    }
                }
                printf("\n");
            }

        }
    }

    return 0;
}
