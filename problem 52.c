#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,count,str_len1,str_len2,T;
    char a[128],b[128];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter the string a & b: ");
        scanf("%s%s",a,b);
        str_len1=strlen(a);
        str_len2=strlen(b);

        count=0;
        for(i=0;i<str_len1;i++)
        {
            if(b[0]==a[i])
            {
                for(j=1;j<str_len2;j++)
                {
                    if(b[j]!=a[j+i])
                        break;
                }
                if(j==str_len2)
                {
                    count++;
                }

            }
            if(i==str_len1-1){
                break;
            }
        }
        printf("%d\n",count);
        printf("i = %d\n",i);
    }
    return 0;
}

