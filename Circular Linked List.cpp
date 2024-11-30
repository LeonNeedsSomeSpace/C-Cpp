#include <stdio.h>
#include <stdlib.h>

//Circular linked list


//Set up node structure
struct Node {
	
	int data; 
	struct Node* next; 

};

//Create nine nodes
//Create functions that accept data as integers
int main() {
	
	struct Node* first = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* second = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* third = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* fourth = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* fifth = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* sixth = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* seventh = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* eighth = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* ninth = (struct Node*)malloc(sizeof(struct Node)); 

	//Store data
	first->data = 0; 
	second->data = 1; 
	third->data = 0; 
	fourth->data = 1; 
	fifth->data = 0; 
	sixth->data = 0; 
	seventh->data = 0; 
	eighth->data = 1; 
	ninth->data = 0; 

	//Create pointers
	first->next = second; 
	second->next = third; 
	third->next = fourth; 
	fourth->next = fifth; 
	fifth->next = sixth; 
	sixth->next = seventh; 
	seventh->next = eighth; 
	eighth->next = ninth; 
	ninth->next = first; //Points from the end to the start

	struct Node* current = first; 

	//Create an infinite loop
	while (1) {
		printf("%d ", current->data); 
		current = current->next;

	}

	//Free allocated memory 
	struct Node* storage; 
	current = first; 
	do {
		storage = current->next; //Store data from next node temporarily
		free(current); //Free the current data
		current = storage; //Go to the next node
	} while (current != first); 

	return 0; 
}
