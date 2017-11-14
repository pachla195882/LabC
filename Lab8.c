#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

struct student{
	char imie[20];
	char nazwisko[20];
	
};

struct stack{
	int tab[SIZE];
	int top;
};

void init(struct stack *stackPointer){
	int i;
	for(i=0;i<SIZE;i++){
		//stackPointer->tab[i]=NULL;
		stackPointer->top=0;
	}
}

void push(struct stack *stackPointer,struct student *studentPointer){
	if(stackPointer->top==SIZE){
		printf("Stos pełny!");
	}else{
		stackPointer->tab[stackPointer->top]=studentPointer;
		stackPointer->top++;
	}
	
}

int pop(struct stack *stackPointer){
	int value;
	if(stackPointer->top==0){
		printf("Stos pusty!");
	}else{
		value=stackPointer->tab[stackPointer->top-1];
		stackPointer->top--;
	}
	return value;
	
}

int size(struct stack *stackPointer){
	return stackPointer->top;
}

bool isEmpty(struct stack *stackPointer){
	if(stackPointer->top=0){
		return 1;
	}else{
		return 0;
	}
	
}

int main (int argc, char *argv[]){

	struct stack stackOne;

	struct student studentOne;
	

}