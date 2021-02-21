#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,T,count=0;
    char line[100000];
    char *p,*e;
    long int input;

    printf("T = ");
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        printf("Enter the string value: ");

        scanf(" %[^\n]",&line);
        //printf("string value: %s\n",line);

        //p = line;
        for(p=line;;p=e)
        {
            input = strtol(p,&e,10);
            if(p == e)
            {
                break;
            }
            count = count+1;
        }
        printf("Count = %d\n",count);
    }

    return 0;

}
