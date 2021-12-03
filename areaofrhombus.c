#include <stdio.h>
int area();
int main()
{
    area();
    return 0;
}
int area()
{
    int d1,d2,area;
    printf("Enter the first diagonal of Rhombus:\n");
    scanf("%d",&d1);
    printf("Enter the second diagonal of Rhombus:\n");
    scanf("%d",&d2);
    area=d1*d2/2;
    printf("The area of Rhombus is %d",area);
}

