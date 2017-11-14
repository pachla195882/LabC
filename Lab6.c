#include <stdlib.h>
#include <stdio.h>

void count(){
	FILE* file;
	char read[15];
	char wanted[10]="ala";
	char nap[10];
	int counter=0;
	printf("Podaj adres źródłowego pliku: ");
	scanf ("%s", read);
	file = fopen(read,"r");
	
	if(file==NULL){
		printf("Błąd otwarcia pliku źródłowego.\n");
		exit(1);
	}
	
	while(!feof(file)){
		fscanf(file,"%s",nap);
		if(!strcmp(nap,wanted)) counter++;
	}
	printf("%s %d\n",nap,counter);
	fclose(file);
}

void miejsceZerowe(){
	
}

int main (int argc, char *argv[]){
	/*int one;
	int two;
	one = atoi(argv[1]);
	two = atoi(argv[2]);
	int three = one+two;
	printf("%d\n",three);
	int i;
	for(i=0;i<argc;i++){
		printf("%s",argv[i]);
	}*/
	
	count();
}