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

int insert_first_node(ListPtr ptrList, Data data){
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

/*int insert_last_node(ListPtr ptrList, Data data){*/
	/*if(ptrList == NULL) {*/
		/*return -1;*/
	/*};*/
	
	/*NodePtr tempPtr = (NodePtr) malloc (sizeof (Node));*/
	/*if(!tempPtr) {*/
		/*return -1;*/
	/*};*/
	
	/*tempPtr -> data = data;*/
	/*tempPtr -> next = NULL;*/
	/*ptrList-> size += 1;*/

	/*if(ptrList-> head == NULL){*/
		/*ptrList -> head = tempPtr;*/
		/*ptrList -> tail = tempPtr;*/
		/*return 1;*/
	/*}else{*/
		/*NodePtr auxPtr = ptrList->head;*/
		/*while(auxPtr -> next != NULL){*/
			/*auxPtr -> next = (auxPtr->next)->next;*/
		/*}*/
		/*auxPtr -> next = tempPtr;	*/
		/*ptrList -> tail = tempPtr;*/
	/*}*/
	/*return 1;*/
/*}*/

