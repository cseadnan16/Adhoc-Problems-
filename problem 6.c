#include<stdio.h>

int main()

{
    int i,T,N,sum,LSD,MSD;

    printf("T = ");
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {

        printf("\nEnter the value of N: ");
        scanf("%d",&N);
        LSD = N%10;
        //printf("LSD value is: %d\n",LSD);

        int count = 0;
        while(N!=0)
        {
             MSD = N%10;
             //printf("MSD value is: %d\n",MSD);

             N = (N-MSD)/10;
             //printf("\nValue N is: %d\n",N);

            /* if(N==0)
             {
                 MSD = MSD;
                 printf("MSD value is: %d\n",MSD);
                 break;
             }*/
             count++;

        }
        //printf("Count = %d\n",count);
        if(count<5){
            printf("Sorry ! your digit less than 5\nPlease enter 5 digit.\n");
        }
        else if(count>5){
            printf("Sorry ! your digit more than 5\nPlease enter 5 digit.\n");
        }
        else{
            sum = MSD+LSD;
            printf("Sum = %d\n",sum);
        }
    }
    return 0;
}
