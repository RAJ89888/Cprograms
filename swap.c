
#include <stdio.h>
int swap();
int main()
{
    swap();
    return 0;
}
int swap(int n1, int n2)
{
    printf("Enter the first number:\n");
    scanf("%d",&n1);
    printf("Enter the second number:\n");
    scanf("%d",&n2);
    printf("The value of first and second number before swapping is %d and %d\n",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("The value of first and second number after swapping is %d and %d",n1,n2);
}

