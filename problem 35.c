#include<stdio.h>
#include<math.h>

int main()
{
    int T,X,X1,Y,Y1,radius,value;

    printf("T = ");
    scanf("%d",&T);

    while(T--)
    {
        printf("\nEnter the value of central Coordinate X1 & Y1: ");
        scanf("%d%d",&X1,&Y1);

        printf("radius = ");
        scanf("%d",&radius);

        printf("Enter the value of Coordinate X & Y: ");
        scanf("%d%d",&X,&Y);

        value = sqrt(((X-X1)*(X-X1))+((Y-Y1)*(Y-Y1)));

        if(radius>=value)
        {
            printf("This point is inside the circle\n");
        }
        else
        {
            printf("This point is not inside the circle\n");
        }
    }

    return 0;
}
