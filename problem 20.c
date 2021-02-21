#include<stdio.h>
#include<string.h>
int main()
{
    int i,T,count;
    char S[10000],*word;

    printf("T = ");
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        printf("\nPlease enter the any word : ");
        scanf(" %[^\n]",S);

        word = strtok(S,",;!?. "); //স্ট্রিং এর প্রথম শব্দ বা প্রথম অংশটি কেটে নিলাম
        //printf("Word is = %s\n",word);

        count=0;
        while(word != '\0')  //স্ট্রিং এর বাকি শব্দ গুলোর জন্য লুপ ইউজ করছি
        {
            //printf("Word is = %s\n",word);
            count++;
            word = strtok('\0',",;!?. "); //str এর জায়গায় এখন NULL দিব কারন NULL দিলে আগের স্ট্রিংটির পরবর্তী অংশ নিয়ে কাজ করে ।
            //printf("Word is = %s\n",word);

        }
        printf("Count = %d\n",count);
    }
    return 0;
}


