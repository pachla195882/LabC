#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int losuj(int min, int max){
	srand(time(NULL));
	int i = rand()%6+2;
	return i;
}

void wypelnij(int tab[][10]){
	int i=0;
	int j=0;
	for(i;i<10;i++){
		for(j;j<10;j++){
			tab[i][j]=losuj(1,10);
			printf("%d ", tab[i][j]);
		}
		//printf(" \n ");
	}
}

void drukuj(int tab[][10]){
	int i=0;
	int j=0;
	for(i;i<10;i++){
		for(j;j<10;j++){
			printf("%d ", tab[i][j]);
		}
		printf(" \n ");
	}
}

int licz(int tab[][10], int x, int y){
	
}

int main (int argc, char *argv[]){

int tab[10][10];
wypelnij(tab);
//drukuj(tab);

}