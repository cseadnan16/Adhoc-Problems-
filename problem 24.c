#include<stdio.h>

int main()
{
    int i,j,n,T;

    printf("T = ");
    scanf("%d",&T);

    printf("\n");

    j=0;
    do
    {
        printf("n = ");
        scanf("%d",&n);
        int E[n];

        for(i=0;i<n;i++){
            printf("Element %d : ",i+1);
            scanf("%d",&E[i]);
        }

        for(i=0;i<n;i=i+2){
            printf(" %d",E[i]);
        }
        printf("\n\n");

        j++;
    }while(j<T);

}
