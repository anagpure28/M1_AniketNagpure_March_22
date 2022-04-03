#include "function.h"
int ListofMovies(void)

{
	int i;
	system("cls");
	printf("\t\t\tMovie Name?\n");
	printf("\t\t\t----------------------------\n\n");
	printf("\t\t\tpress 1 for War\n\n");
	printf("\t\t\tpress 2 for RRR\n\n");
	printf("\t\t\tpress 3 for Bahubali\n");
	scanf("%d",&i);
	return i;
}
