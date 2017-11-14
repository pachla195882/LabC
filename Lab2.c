#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

int i = 5;
int *wskaznik = &i;

//Zadanie 1
// printf("Wartość zmiennej całkowitej i bezpośrednio: %d \n", i);
// printf("Wartość zmiennej całkowitej i z wykorzystaniem wskaźnika: %d \n", *wskaznik);
// printf("Adres zmiennej całkowitej: %p \n", &i);
// printf("Adress zmiennej całkowitej: %p \n", wskaznik);

// *wskaznik = 6;

// printf("Wartość zmiennej całkowitej i bezpośrednio: %d \n", i);
// printf("Wartość zmiennej całkowitej i z wykorzystaniem wskaźnika: %d \n", *wskaznik);
// printf("Adres zmiennej całkowitej: %p \n", &i);
// printf("Adress zmiennej całkowitej: %p \n", wskaznik);


//Zadanie 2
// int tablica[10];
// int x;
// int p;
// for(p=0;p<10;p++){
	// scanf("%d",&x);
	// *(tablica+p)=x;
	
// }
// for(p=0;p<10;p=p+2){
	// printf("%d ", *(tablica+p));
// }


//Zadanie 3
int intWrt00=0;
int intWrt01=0;
int intWrt02=0;
int intWrt03=0;
int intWrt04=0;

int intTab[5]={0,0,0,0,0};

int *pInt = &intWrt00;
*pInt = 10;
printf("%d ",*pInt);

*pInt = &intWrt01;
*pInt = 11;
printf("%d ", *pInt);

*pInt = &intWrt02;
*pInt = 12;
printf("%d ", *pInt);

*pInt = &intWrt03;
*pInt = 13;
printf("%d ", *pInt);

*pInt = &intWrt04;
*pInt = 14;
printf("%d \n", *pInt);

int q;
int w=110;
for(q=0;q<5;q++){
	*pInt=(intTab+q);
	*pInt=w++;
	printf("%d ",*pInt);
}


return 0;
}