#include<stdio.h>
int main()
{
    int i, sum =0;

    printf("The first 10 natural numbers are : \n");
    for ( i=1; i<=10; i++)
    {
        sum = sum +i;
        printf("%d",i);
    }
    printf("\n The sum is : %d",sum);

    return 0;
}
