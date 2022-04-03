#include "function.h"
int changepriceticket(int price)
{
	char pass[10],pac[10]="admin";
	printf("Enter your password to change the pricing of ticket: ");
	scanf("%s",&pass);
	if (strcmp(pass,pac)==0)
	{
		printf("Please enter new price: ");
		scanf("%d",&price);
		printf("Price Updated Successfully: ");
		system("PAUSE");
		system("CLS");
	}
	else
		printf("The entered password is wrong! ");
	return price;
}
