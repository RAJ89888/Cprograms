#include<stdio.h>
#include<math.h>
int add_contact();
int update();
int exit_ex();
int you();

int main()
{
	int choice;
	
		printf("Enter your choice:\n1:Add a contact\n2:Update a contact\n3:Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			{
				add_contact();
				break;
			}
			case 2:
			{
				update();
				break;
			}
			case 3:
			{
			    exit_ex();
			    break;
			}
			default :
			{
				printf("Wrong Input");
				break;
			}
		}
	}

int add_contact()
{
	double i=0,con;
	char name[20],ch;
	int number;
	printf("Enter the name of the contact:\n");
	scanf("%s",&name);
	printf("Enter the Contact Number\n");
	scanf("%lf", &con);
	while (con!=0)
	{
		con=trunc(con/10);
		i++;
	}
	if(i==10)
	{
		printf("Number is Successfully Added\n");
	}
	if(i<10||i>10 && number==0)
	{
		printf("please enter the valid number\n");
		add_contact();
	}
		printf("Do you want to continue?[y/n]:");
	scanf("%s",&ch);
	if(ch=='y')
	{
		main();
	}
	if(ch=='n')
	{
		printf("YOU EXITED !");
	}
	return 0;
}
int update()
{
	double up,k;
	int ch;
	printf("Enter the  Contact Number for updation:\n");
	scanf("%lf",&up);
	while (up!=0)
	{
		up=trunc(up/10);
		k++;
	}
	if(k==10)
	{
		printf("Contact Number is Updated successfully\n");
	}
	if(k<10||k>10 && up==0)
	{
		printf("please enter the valid number\n");
		update();
	}
	printf("Do you want to continue?[y/n]:");
	scanf("%s",&ch);
	if(ch=='y')
	{
		main();
	}
	if(ch=='n')
	{
		printf("YOU EXITED !");
	}
	return 0;
}

int exit_ex()
{
	printf("Welcome back soon\n");
	return 0;
}


