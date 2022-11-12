#ifndef LINKED_LIST_H
#define LINKED_LIST_H

	// Here you can choose the type of data each node is going to store/hold for the global implementation.
	#define CHOSEN_TYPE int
	
	#include <stdbool.h>	
	#include <stdint.h>
	
	typedef CHOSEN_TYPE Data;	
	
	struct node{
		Data data;
		struct node *next;
	};
		
	struct list{
		struct node *head;
		uint16_t size;
		struct node *tail;
	};

	typedef struct node Node;
	typedef struct list List;

	typedef struct node* NodePtr;
	typedef struct list* ListPtr;

	ListPtr create_list();	
	int insert_first(ListPtr list_ptr, Data data );
	int insert_last(ListPtr list_ptr, Data data );
	NodePtr get_node(ListPtr list_ptr ,int index);	
	/*bool remove_node(int data, List *list);*/
	/*uint16_t length_list(List *list);*/

//	bool addFirst ( List *list );
//	bool removeFirst( List *list );
	
//	void sort(List *list);
//	void printList();
#endif
