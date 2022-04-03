#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void details(void)
{
	int i;
	int count =0;
	char pass[10],pac[10]="admin";
	printf("Enter the registered password to see your details: ");
	scanf("%s",&pass);
	if (strcmp(pass,pac)==0)
	{
		for (i=0;i<count;i++)
		{
			printf("seat no: %d is booked by %s booking id of the person is %d\n",person[i].seatnum,person[i].name,person[i].id);
		}
	}
	else
		printf("The Entered password is Wrong \n");
		system("PAUSE");
		system("CLS");
}
