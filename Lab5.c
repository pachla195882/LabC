#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct student{
	char imie[10];
	char nazwisko[20];
	int numerIndeksu;
	char kierunekStudiow[20];
	char wydzial[20];
	int rokStudiow;
	
};

void fillAll(struct student *s, char imie[], char nazwisko[], int numerIndeksu, char kierunekStudiow[], char wydzial[], int rokStudiow){
	strcpy(s->imie, imie);
	strcpy(s->nazwisko, nazwisko);
	s->numerIndeksu = numerIndeksu;
	strcpy(s->kierunekStudiow, kierunekStudiow);
	strcpy(s->wydzial, wydzial);
	s->rokStudiow = rokStudiow;
}

void printAll(struct student *s){
	printf("%s, %s, %d, %s, %s, %d\n", s->imie, s->nazwisko, s->numerIndeksu, s->kierunekStudiow, s->wydzial, s->rokStudiow);
}

struct osoba{
	char imie[10];
	char nazwisko[20];
	int kierunkowy;
	char numer[10];
};

void fillOsoba(struct osoba *o, char imie[], char nazwisko[], int kierunkowy, char numer[]){
	strcpy(o->imie, imie);
	strcpy(o->nazwisko, nazwisko);
	o->kierunkowy=kierunkowy;
	strcpy(o->numer, numer);
}


int main (int argc, char *argv[]){
	
	struct student studentOne;
	fillAll(&studentOne, "Jan", "Kowalski", 123456, "Europeistyka", "OiZ", 4);
	printAll(&studentOne);

	int MAKS = 5;
	struct osoba ksiazka[MAKS];
	

}