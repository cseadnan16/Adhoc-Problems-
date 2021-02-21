#include<stdio.h>
#include<math.h>
#define size 1000001

char prime_ara[size];

void find_prime_number()
{
    int i,j,root;

    for(i=0;i<size;i++)
    {
        prime_ara[i]=1;
    }
    root = sqrt(size);

    for(i=2;i<root;i++)
    {
        if(prime_ara[i]==1)
        {
            for(j=i;j+i<=size;j+=i)
            {
                prime_ara[j+i]=0;
            }
        }
    }
}

int is_prime(int N)
{
    int i,sqrt_n;

    if(N<2)
    {
        return 0;
    }
    else if(N==2)
    {
        return 1;
    }
    else if(N%2==0)
    {
        return 0;
    }

    sqrt_n = sqrt(N);
    printf("Root = %d\n",sqrt_n);

    for(i=3;i<=sqrt_n;i=i+2)
    {
        if(prime_ara[i]==1)
        {
            if(N%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int i,sqrt_n,T;
    long long int N;

    find_prime_number();

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nPlease enter the value of N: ");
        scanf("%lld",&N);

        if(is_prime(N)==1)
        {
            printf("%lld is a prime\n",N);
        }
        else
        {
            printf("%lld is not a prime\n",N);
        }
    }

    return 0;
}

