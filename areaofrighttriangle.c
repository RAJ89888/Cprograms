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
    printf("Enter the height of right angled triangle:\n");
    scanf("%d",&h);
    printf("Enter the base of right angled triangle:\n");
    scanf("%d",&b);
    area=h*b/2;
    printf("The area of right angled triangle triangle is %d",area);
}

