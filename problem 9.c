#include<stdio.h>
#include<math.h>

double square_root(int number);

int main()
{
    int n,T,kase,temp;
    double root_value;

    printf("T = ");
    scanf("%d",&T);

    for(kase=0;kase<T;kase++)
    {
        printf("\nEnter the value of n is: ");
        scanf("%d",&n);

        root_value = sqrt(n);
        temp = root_value;
        if((temp*temp)== n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

        printf("Root Value = %lf\n",root_value);
        printf("Temp Value = %d\n",temp);
    }
    return 0;
}


