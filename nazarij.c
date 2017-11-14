#include <stdio.h>
#include <stdlib.h>

void copy(char*, char*);
void main()
{
	//char *from = malloc(sizeof(char*) * 100);
	//char *to = malloc(sizeof(char*) * 100);
	char from[20];
	char to[20];
	printf("Podaj sciezke do pliku zrodlowego -> ");
	fgets(from);
	printf("Podaj sciezke do pliku docelowego -> ");
	fgets(to);

	copy(from, to);
}
void copy(char *skad, char * dokad)
{	
	char buf;

	FILE *plik1 = fopen(skad, "r");
	if (plik1 == 0)
	{
		printf("Blad otwarcia pliku zrodlowego!\n");
		exit(1);
	}

	FILE * plik2 = fopen(dokad, "w");
	if (plik2 == 0)
	{
		printf("Blad otwarcia pliku docelowego!\n");
		exit(1);
	}
	while ((buf = fgetc(skad))!=EOF)
	{
		printf("ERROR\n");
		putc(buf, dokad);
	}
	printf("Plik zostal skopijowany!\n");

	fclose(plik1);
	fclose(plik2);
}