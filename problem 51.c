#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,start,str_len1,str_len2,T;
    char a[128],b[128];

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter the string a & b: ");
        scanf("%s%s",a,b);
        str_len1=strlen(a);
        str_len2=strlen(b);

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
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
