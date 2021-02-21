#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,length,T;
    char n[101];
    //length=0;

    printf("Please enter the T: ");
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {

        printf("\nPlease enter the value of n: ");
        scanf("%s",n);
        length = strlen(n);

        /*
        length =0;
        for(j=0;n[j]!='\0';j++)
        {
            length=length+1;
        }*/


        printf("\n%s length is %d\n",n,length);

        if(n[length-1]%2==0)
        {
            printf("The value is even\n");
        }
        else
        {
            printf("The value is odd\n");
        }
    }
    return 0;
}
