#include<stdio.h>

typedef struct pacjent {
	char imie[10];
	char nazwisko[10];
	unsigned int wiek;
	unsigned int numer;
}typ_pacjenta;

int main()
{
	int wynik, wiek;
	char imie[10], nazwisko[10];
	typ_pacjenta *pacjent;
	int rozmiar = 10;
	scanf("%s,%s,%d", imie, nazwisko, wiek);
	printf("Witaj");
	getchar();
	return 0;
}