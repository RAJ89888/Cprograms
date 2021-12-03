#include <stdio.h>
int area();
int main()
{
    area();
    return 0;
}
int area()
{
    int h,b,area;
    printf("Enter the height of parallelogram :\n");
    scanf("%d",&h);
    printf("Enter the base of parallelogram :\n");
    scanf("%d",&b);
    area=h*b;
    printf("The area of parallelogram is %d",area);
}

