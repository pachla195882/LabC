#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//suma dwoch krotszych musi byc dluzsza od najdluzszego
struct trojkat{
	int a;
	int b;
	int c;
};

bool isTriangle(struct trojkat* triangle){
	if(triangle->a>triangle->b+triangle->c){
		printf("Można");
		return true;
	}
	else if(triangle->b>triangle->a+triangle->c){
		printf("Można");
		return true;
	}
	else if(triangle->c>triangle->b+triangle->a){
		printf("Można");
		return true;
	}
	else {
		printf("Nie można");
		return false;
	}
}

void checkDane(){
	FILE * read;
	struct trojkat* triangle;
	int array[9];
    int i;
   
	read=fopen("dane.txt","r");
	if((read==NULL)){
		printf("Błąd otwarcia pliku. \n");
		exit(1);
	}
	do{
		if(!feof(read)){
		    for (i = 0; i < 9; i++) {
				fscanf(read, "%d", &array[i]);
			}
		}
	}while(!feof(read));
		for(i=0;i<9;i++){
		printf("%d", array[i]);
	}
	triangle->a=array[0];
	triangle->b=array[1];
	triangle->c=array[2];
	isTriangle(triangle);
	fclose(read);

	
}
int main (int argc, char *argv[]){
	checkDane();
}