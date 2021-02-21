#include<stdio.h>

int main()
{
    int i,j,k,n1,n2,n,T;
    int c[100];
    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nn1: ");
        scanf("%d",&n1);
        int a[n1];

        printf("please enter the array values: ");
        for(i=0;i<n1;i++)
        {
            scanf("%d",&a[i]);
        }

        printf("n2: ");
        scanf("%d",&n2);
        int b[n2];

        printf("please enter the array values: ");
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[j]);
        }

        i=0,j=0,k=0;
        while(1)
        {
            if(i==n1 && j==n2)
            {
                break;
            }

            else
            {
                if(a[i]<b[j])
                {
                    c[k]=a[i];
                    i++;
                    k++;
                }
                else if(a[i]==b[j])
                {
                    c[k]=a[i];
                    i++,j++,k++;
                    //j++;
                }
                else
                {
                    c[k]=b[j];
                    j++;
                    k++;
                }
            }
        }
        n=k;

        printf("\n");
        for(i=0;i<n;i++)
        {
            printf(" %d",c[i]);
        }
        printf("\n");
    }
    return 0;
}
