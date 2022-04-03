#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void cancelticket(int *array)
{
      int Cseat,i,stop;
	  printf("Please enter given ID number of ticket: ");
	  scanf("%d",&Cseat);
	  for (i=0;i<300;i++)
	  {
	  		if(Cseat==person[i].id)
	  		{
					 stop=5;
					 system("cls");
					 printf("%s your ticket for the movie is %d cancelled",person[i].name,person[i].Seatnumber);
					 array[person[i].Seatnumber]=0;
					 i=300;
	  		}
	  }
	  if (stop!=5)
	  		printf("Ticket ID number is incorrect please enter the right ticket number to the reserve ticket: \n");
}
