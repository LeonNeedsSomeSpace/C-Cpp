#include <stdio.h>
#include <stdlib.h>

//Simple linked list exercise 
//Linked lists are used in a variety of different cases, such as memory allocation


//Set up the node structure

struct Node {

	int data;  //Define the data type you want to store
	struct Node* next;  //Create a pointer that points from one node to the next one

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
	struct Node* eight = (struct Node*)malloc(sizeof(struct Node));
	struct Node* ninth = (struct Node*)malloc(sizeof(struct Node)); 

	//Assign values to the nodes. Each node will store an integer as data. 

	first->data = 1;   
	second->data = 2;
	third->data = 3;
	fourth->data = 4;  
	fifth->data = 5; 
	sixth->data = 6; 
	seventh->data = 7; 
	eight->data = 8; 
	ninth->data = 9; 


	//Link the nodes
	//This is a single linked list as it can only point forward
	//Instruct which node will point to which other node 

	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth; 
	fifth->next = sixth;  
	sixth->next = seventh; 
	seventh->next = eight;  
	eight->next = ninth; 
	ninth->next = NULL; //This is where the linked list will terminate
	 
	//A single linked list is useful when it comes to memory efficiency and dynamic size (growing or shinking in size)
	//Double linked lists can move both forwards and backwards, and therefore can perform insertion or deletion as well as undo/redo operations better
	//Circular linked lists can be used in game development for objects that are present continuously (such as a map) or used in memory management 

	//Traverse and display the linked list 
	//Traversal means to visit any node

	struct Node* current = first;
	printf("Stored Data: ");
	while (current != NULL) { //Create a while function with the condition that current node doesn't equal NULL 
		printf("%d ", current->data);
		current = current->next; //Remember to move to the next node
	} 

	//By using free, memory that has been previously allocated by the using program is released
	//If you allocate memory dynamically by using 'malloc' for instance, you are essentially requesting stored data from the heap
	//The memory remains allocated until it is released by 'free'
	//So, free the memories stored in the system's heap

	free(first);
	free(second); 
	free(third);
	free(fourth); 
	free(fifth); 
	free(sixth);
	free(seventh); 
	free(eight); 
	free(ninth); 

	return 0; 
}



