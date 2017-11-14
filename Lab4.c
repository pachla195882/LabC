#include <stdio.h>
#include <stdlib.h>

void fill(int (*tab)[10]){
	int x=0;
	int y=0;
	for(x;x<10;x++){
		for(y;y<10;y++){
			int i;
			do{
				i=losuj(1,10);
			}while(checkPrime(i));
			*(*(tab+x)+y)=i;
		}
	}
}

void print(int (*tab)[10]){
	int x=0;
	int y=0;
	for(x;x<10;x++){
		for(y;y<10;y++){
			if(x==y){
				
			}
			else{
				printf("0");
			}
		}
	}
}

int losuj(int min, int max){
	srand(time(NULL));
	int i = rand()%6+2;
	return i;
}

int checkPrime(int i){
	int c;
	for(c=2;c<=i-1;c++){ 
		if (i%c==0)
		return 0;
	}
	if(c==i)
		return 1;
	return 0;
}

int main (int argc, char *argv[]){
	int tab[10][10];
	int (*pointer)[10];
	pointer=tab;	
	fill(pointer);
	return 0;
}