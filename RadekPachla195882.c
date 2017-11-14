#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void mergeFiles(char *pointerFirst, char *pointerSecond){
	FILE *file1;
	FILE *file2;
	FILE *save;
	
	int i;
	int j;
	char s[9]="plik3.txt";
	char txt1[11];
	char txt2[22];
	char txt3[33];
	file1 = fopen(pointerFirst,"r");
	if(file1==NULL){
		printf("Błąd otwarcia pliku źródłowego.\n");
		exit(1);
	}
	file2 = fopen(pointerSecond,"r");
	if(file2==NULL){
		printf("Błąd otwarcia pliku źródłowego.\n");
		exit(1);
	}
	
	save = fopen(s,"w");
	if(save==NULL){
		printf("Błąd otwarcia pliku docelowego.\n");
		exit(1);
	}
	
	int rozmiar1=ftell(file1);
	int rozmiar2=ftell(file2);
	
	for(i=rozmiar1;i>0;i--){
		fseek(file1,i,SEEK_END);
	}
	for(j=rozmiar2;j>0;j--){
		fseek(file2,j,SEEK_END);
	}
	
	while(!feof(file1)){
		fgets(txt3,33,file1);
		fputs(txt3,save);
	}
	
	
	
	if(fclose(file1)==EOF){
		printf("Błąd zamknięcia pierwszego pliku źródłowego");
	}
	if(fclose(file2)==EOF){
		printf("Błąd zamknięcia drugiego pliku źródłowego");
	}
	if(ferror(save)){
		printf("Błąd zapisu pliku docelowego. \n");
	}
	fclose(file1);
	fclose(file2);
	fclose(save);
	
}


int main (int argc, char *argv[]){
	char first[10];
	char second[10];
	
	char *pointerFirst;
	char *pointerSecond;
	
	pointerFirst=first;
	pointerSecond=second;
	
	printf("Podaj adres pierwszego źródłowego pliku: ");
	scanf("%s",first);
	printf("Podaj adres drugiego źródłowego pliku: ");
	scanf("%s", second);
	mergeFiles(first,second);
	


}