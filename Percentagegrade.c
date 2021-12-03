#include<stdio.h>
void grade(float i);
int main()
{
	int x;
	grade(x);
	return 0;
}
void grade(float i)
{
	printf("Enter percentage Grade:\n");
	scanf("%f",&i);
	if(i>=0 && i<=56)
	{
		float grade;
		grade=0.0;
		printf("Grade Points Average:%f",grade);
	}
	else if(i>=57 && i<=61)
	{
		float grade;
		grade=1.0;
		printf("Grade Points Average:%f",grade);
	}
	else if(i>=62 && i<=66)
	{
		float grade;
		grade=1.5;
		printf("Grade Points Average:%f",grade);
	}
	else if(i>=67 && i<=71)
	{
		float grade;
		grade=2.0;
		printf("Grade Points Average:%f",grade);
	}
	else if(i>=72 && i<=77)
	{
		float grade;
		grade=2.5;
		printf("Grade Points Average:%f",grade);
	}
	else if(i>=78 && i<=86)
	{
		float grade;
		grade=3.0;
		printf("Grade Points Average:%f",grade);
	}
	else if(i>=87 && i<=91)
	{
		float grade;
		grade=3.5;
		printf("Grade Points Average:%f",grade);
	}
	else if(i>=92 && i<=100)
	{
		float grade;
		grade=4.0;
		printf("Grade Points Average:%f",grade);
	}
}


