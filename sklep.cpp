#include <stdio.h>

int main(void)
{
	printf("********************* WITAJ W SKLEPIE *********************\n\n");
	printf("Wciśnij: \n");
	printf("Z - zakupy\n");
	printf("K - koniec\n\n");
	printf("Decyzję zatwiedź klawiszem enter.\n");

	char decyzja;
	scanf("%c", &decyzja);
	while (getchar() != '\n');
	
	while (decyzja != 'K' && decyzja != 'k')
	{
		printf("\nWybierz produkt:\n");
		printf("1 - Jabłko\n");
		printf("2 - Truskawka\n");
		printf("3 - Cytryna\n");
		printf("4 - Kiwi\n");

		int produkt;
		scanf("%d", &produkt);
		while (getchar() != '\n');

		if (produkt == 1)
		{
			printf("\nZakupiono jabłko!.\n");
		} 
		else if (produkt == 2)
		{
			printf("\nZakupiono truskawkę!\n");
		} 
		else if (produkt == 3)
		{
			printf("\nZakupiono cytrynę!.\n");
		} 
		else if (produkt == 4)
		{
			printf("\nZakupiono kiwi!.\n");
		}
		else
		{
			printf("\nNie ma takiego produktu!\n");
		}

		

		printf("Wciśnij: \n");
		printf("Z - zakupy\n");
		printf("K - koniec\n");

		scanf("%c", &decyzja);
		while (getchar() != '\n');
	}
	printf("\n****************** Dziękujemy za zakupy. ******************\n");
	printf("********************** Do widzenia! ***********************\n");
	return 0;
}