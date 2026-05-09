#include <stdio.h>

int main(void)
{
	// Instrukcje wyświetlania
	printf("********************* WITAJ W SKLEPIE *********************\n\n");
	printf("Wciśnij: \n");
	printf("Z - zakupy\n");
	printf("K - koniec\n\n");
	printf("Decyzję zatwiedź klawiszem enter.\n");
	
	// Deklaracja zmiennej
	char decyzja;
	
	// Pobranie znaku od użytkownika 
	// i przypisanie tego znaku do zmiennej #decyzja#
	scanf("%c", &decyzja);
	
	// Zobacz wyjaśnienie na końcu pliku
	while (getchar() != '\n');
	
	// Główna pętla programu - dopóki użytkownik nie wprowadzi k lub K,
	// program będzie kontynuował działanie.
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

		// Konstrukcja else-if
		// Jeśli użytkownik wprowadzi 1 to ..
		// Jeśli użytkownik wprowadzi 2 to ..
		// ...
		// W przeciwnym razie wypisz na ekranie "Nie ma takiego produktu!"
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
		
		// Ponowne pobranie znaku od użytkownika,
		// aby wykonać pętlę ponownie, lub wyjść z pętli. 
		// (warunek zwracający fałsz kończy pętlę główną programu)
		scanf("%c", &decyzja);
		while (getchar() != '\n');
	}
	printf("\n****************** Dziękujemy za zakupy. ******************\n");
	printf("********************** Do widzenia! ***********************\n");
	return 0;
}

// while (getchar() != '\n');
// to pętla, która ma za zadanie pobrać z bufora* nadmiarowe dane.
// Jeśli funkcja scanf() oczekuje jednego znaku, 
// a na wejściu mamy np. "fdskla", pierwsza litera trafia do funkcji scanf(),
// a kolejne zostają w buforze.
// Gdyby nie było intrukcji while (getchar() != '\n');
// kolejne litery byłyby pobierane przez inne funkcje scanf() w kodzie,
// a program zachowywałby się, jak gdyby użytkownik wprowadzał te litery po kolei.

// *bufor to miejsce w pamięci, do którego trafia ciąg znaków przesłany przez użytkownika,
//  a który nie został jeszcze pobrany przez program.