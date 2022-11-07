#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Buku{
	char judul[50];
	int tahun;

	struct Buku *lanjut;

}*head, *tail, *current, *newNode, *del;

void create (char judul[], int tahun){

	head = (struct Buku*) malloc (sizeof(struct Buku));
	strcpy(head->judul, judul);
	head->tahun = tahun;
	
	head->lanjut = NULL;
	tail = head;
}

void addFirst(char judul[], int tahun){

	newNode = (struct Buku*) malloc (sizeof(struct Buku));
	strcpy(newNode->judul, judul);
	newNode->tahun = tahun;

	newNode->lanjut = head;
	head = newNode;
}

void addLast(char judul[], int tahun){
	newNode = (struct Buku*) malloc (sizeof(struct Buku));
	strcpy (newNode->judul, judul);
	newNode->tahun = tahun;

	newNode->lanjut = NULL;
	tail->lanjut = newNode;
	tail = newNode;
}

void removeFirst(){
	del = head;
	head = head->lanjut;
	free(del);

}

void removeLast(){
	del = tail;
	current = head;
	while(current->lanjut != NULL){
		current = current->lanjut;
	}
	tail = current;
	tail->lanjut = NULL;

	if (current->lanjut == NULL){
	free(del);
	}
	else {
		printf ("\nData tidak bisa terhapus!\n");
	}
}



void print(){
	current = head; 
	while(current != NULL){ 
		printf("Judul buku : %s\n", current->judul);
		printf("Tahun : %d\n", current->tahun);
		printf ("\n");
		current = current->lanjut; 
	}
}

int main(){

	create("Bumi", 2008);
	addFirst("Minor", 2019);
	removeFirst();
	addLast("Matahari", 2013);
//	removeLast();  idk why cant remove last data

	print();


	return 0;
}