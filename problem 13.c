#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,r,T,count,permutation,length;
    char S[10000];

    printf("T = ");
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        printf("\nPlease enter tha any Sentence : ");
        scanf(" %[^\n]",S);

        count=1;
        for(j=0;S[j]!='\0';j++)
        {
            if(S[j] == ' ')
            {
                count++; //এইখানে count হলো বাক্যে সর্বমোট শব্দ
            }
        }

        n=1;
        for(j=count;j>=1;j--) //nPr সূত্রের জন্য n! এর মান বের করা , এখানে  n এর কাজ হলো সর্বমোট শব্দের ফ্যাক্টরিয়াল মান বের করা ।
        {
           n = n*j;
        }

        /*r=1;
        for(j=r;j>=1;j--) //nPr সূত্রের জন্য r! এর মান বের করা , এখানে  r হলো কোন শব্দ কতবার আছে সেটি হিসাব করা
        {
            r = r*j;
        }
        permutation = n/r; //nPr সূত্রের P এর মান বের করা  [P=n!/r!]*/
        printf("Permutation = 1/%d\n",n);

    }
    return 0;
}
