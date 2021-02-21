#include<stdio.h>
#include<math.h>
#define size 100001

char ara[size];

void sieve()
{
    int i,j,k,root;
    for(i=2;i<=size;i++)
    {
        ara[i]=1;
    }
    root=sqrt(size);
    printf("root = %d\n",root);

    for(i=2;i<root;i++)
    {
        if(ara[i]==1)
        {
            for(j=i;j<=size;j+=i)
            {
                ara[j+i]=0;
            }
        }
    }
}

int main()
{
    int a,b,i,count,T;
    sieve();

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nPlease enter the value of a & b: ");
        scanf("%d%d",&a,&b);

        count=0;
        for(i=a;i<=b;i++)
        {
            if(ara[i])
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
