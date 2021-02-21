#include<stdio.h>

int main()
{
    int i,n,count,T;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nn = ");
        scanf(" %d",&n);

        int array[n];

        printf("\n");
        for(i=0;i<n;i++)
        {
            printf("Value %d: ",i+1);
            scanf("%d",&array[i]);
        }

        count=0;
        for(i=0;i<n;i++)
        {
            if(array[i]<array[i+1])  //বড় থেকে ছোট এর ক্ষেত্রে কন্ডিশন "<" এর জায়গায় ">" হবে
            {
                count++;
            }
            else
            {
                break;
            }
        }

        if(count == n) //বড় থেকে ছোট এর ক্ষেত্রে "(count+1)==n" হবে
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

    return 0;
}
