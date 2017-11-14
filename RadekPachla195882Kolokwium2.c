#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <math.h>


struct complex{
	int re;
	int im;
};

struct node{
	struct node* next;
	struct node* prev;
	struct complex dane;
};

struct list{
	struct node* head;
	struct node* tail;
};

void push_front(struct list* L,struct node* el){
	if(L->head==NULL){
		el->next=NULL;
		el->prev=NULL;
		L->head=el;
		L->tail=el;
	}
	else{
		el->next=L->head;
		el->prev=NULL;
		L->head->prev=el;
		L->head=el;
	}
}

void push_back(struct list* L, struct node* el){
	if(L->head==NULL){
		el->next=NULL;
		el->prev=NULL;
		L->head=el;
		L->tail=el;
	}
	else{
		el->next=NULL;
		el->prev=L->tail;
		L->tail->next=el;
		L->tail=el;
	}
}

void pop_front(struct list* L){
	struct node* temp;
	if(L->head==L->tail){
		L->tail=NULL;
		free(L->head);
		L->head=NULL;
	}
	else{
		temp=L->head->next;
		L->head->next->prev=NULL;
		free(L->head);
		L->head=temp;
	}
}

void pop_back(struct list* L){
	struct node* temp;
	if(L->head==L->tail){
		L->tail=NULL;
		free(L->head);
		L->head=NULL;
	}
	else{
		temp=L->tail->prev;
		temp->next=NULL;
		free(L->tail);
		L->tail=temp;
	}
}

void init(struct list* L){
	L->head=NULL;
}

void print(struct list* L){
	struct node* wsk = L->head;
	while(wsk){
		printf("%i,%i\t\n",wsk->dane.re,wsk->dane.im);
		wsk=wsk->next;
		
	}
	printf("\n");
}


struct node* create_element(){
	
	struct node* pointer = (struct node*) malloc(sizeof(struct node));
	pointer->next=NULL;
	pointer->dane.re=rand()%10;
	pointer->dane.im=rand()%10;
	return pointer;
}


int modul(struct list* L){
	struct node* wsk = L->head;
	int z;
	return z = sqrt(wsk->dane.re*wsk->dane.re+wsk->dane.im*wsk->dane.im);
}

void sort(struct list* L){
	struct node* wsk = L->head;
	
	while(wsk){
		int i;
		i=sqrt(wsk->dane.re*wsk->dane.re+wsk->dane.im*wsk->dane.im);
		printf("%d ", i);
		wsk=wsk->next;
	}
	
}

int main (int argc, char *argv[]){
	struct list List1;
	init(&List1);
	push_front(&List1,create_element());
	push_front(&List1,create_element());
	push_front(&List1,create_element());
	sort(&List1);
	
	
	
}