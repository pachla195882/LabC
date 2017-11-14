#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void whatSize(FILE* fp){
	fseek(fp,0,SEEK_END);
	int size = ftell(fp);
	printf("Size: %d\n",size);
}
void copyFile(){
	FILE* read;
	FILE* save;
	char r[15];
	char s[15];
	char cpy[57];
	int i;
	int rozmiar=ftell(read);
	printf("Podaj adres źródłowego pliku: ");
	scanf ("%s", r);
	read = fopen(r,"r");
	if(read==NULL){
		printf("Błąd otwarcia pliku źródłowego.\n");
		exit(1);
	}
	printf("Podaj adres docelowego pliku: ");
	scanf ("%s", s);
	save = fopen(s,"w");
	if(save==NULL){
		printf("Błąd otwarcia pliku docelowego.\n");
		exit(1);
	}
	for(i=rozmiar;i>0;i--){
		fseek(read,i,SEEK_END);
	}
	
	while(!feof(read)){
		fgets(cpy,56,read);
		fputs(cpy,save);
	}
	
	if(ferror(save)){
		printf("Błąd zapisu pliku docelowego. \n");
	}
	if(fclose(read)==EOF){
		printf("Błąd zamknięcia pliku źródłowego");
	}
	if(fclose(save)==EOF){
		printf("Błąd zamknięcia pliku docelowego");
	}
}
int main (int argc, char *argv[]){
	FILE* fp = fopen("lorem.txt","r"); 
	char txt[57];
	if(fp==NULL){
		printf("Błąd otwarcia pliku.\n");
		exit(1);
	}
	do{
		fgets(txt, 57, fp);
		if(!feof(fp)){
			printf("%s\n",txt);
		}
	}while(!feof(fp));
	
	
	
	whatSize(fp);
	fclose(fp);
	copyFile();
	
	
	return 0;
}