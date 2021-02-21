
 #include<stdio.h>

int main()
{
    int i,j,N,T;

    printf("Please enter the value of T: ");
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        printf("\nEnter the value N is: ");
        scanf("%d",&N);

        printf("Case %d:",i+1);

        for(j=1;j<=N;j++)
        {
            if(N%j==0)
            {
                printf(" %d",j);
            }
        }

        printf("\n");
    }
    return 0;
}
