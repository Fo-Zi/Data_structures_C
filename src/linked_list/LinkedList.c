#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#include "LinkedList.h"

ListPtr create_list() {
	ListPtr tempList = (ListPtr) malloc (sizeof (List));
	if(!tempList) {
		return -1;
	};
	tempList->size = 0;	
	tempList->head = NULL;	
	tempList->tail = NULL;
	return tempList;
}

int insert_first(ListPtr ptrList, Data data){
	if(ptrList == NULL) {
		return -1;
	};
	
	NodePtr tempPtr = (NodePtr) malloc (sizeof (Node));
	if(!tempPtr) {
		return -1;
	};
	
	tempPtr -> data = data;
	ptrList-> size += 1;

	if(ptrList-> head == NULL){
		ptrList -> head = tempPtr;
		ptrList -> tail = tempPtr;
		tempPtr -> next = NULL;
		return 1;
	}else{
		tempPtr -> next = ptrList->head;
		ptrList -> head = tempPtr;	
	}
	return 1;
}

int insert_last(ListPtr ptrList, Data data){
	if(ptrList == NULL) {
		return -1;
	};
	
	NodePtr tempPtr = (NodePtr) malloc (sizeof (Node));
	if(!tempPtr) {
		return -1;
	};
	
	tempPtr -> data = data;
	tempPtr -> next = NULL;
	ptrList-> size += 1;

	if(ptrList-> tail == NULL){
		ptrList -> tail = tempPtr;
		ptrList -> head = tempPtr;
		return 1;
	}else{
		NodePtr auxPtr = ptrList -> tail;
		auxPtr -> next = tempPtr;
		ptrList -> tail = tempPtr;
	}	
	return 1;
}

/*NodePtr get_node(ListPtr list, int index){*/
	/*if(index < 0){*/
		/*return -1;*/
	/*}*/
	
	/*int iter = 0;*/
	/*NodePtr aux = list -> head;*/
	/*if(aux == NULL){*/
		/*return -1;*/
	/*}*/
	/*while(iter != index){*/
		/*aux = aux -> next;	*/
		/*if(aux == NULL){*/
			/*return -1;	*/
		/*}*/
	/*}*/
	/*return aux;*/
/*}*/
