#include <gtest/gtest.h>

extern "C"{
	#include "../src/linked_list/LinkedList.h"
}

TEST(LinkedListTest,CreatingEmptyList){
	ListPtr empty_list;
	empty_list = create_list();	
	
	ASSERT_TRUE(empty_list->head == nullptr);	
	ASSERT_TRUE(empty_list->tail == nullptr);	
	ASSERT_TRUE(empty_list->size == 0);
}

TEST(LinkedListTest,InsertingFirstNode_valid_inputs){
	ListPtr list1;
	list1 = create_list();	

	// Check that the size is incremented correctly and the data hold by the inserted node too
	ASSERT_TRUE(insert_first(list1, 20) == 1);
	ASSERT_TRUE( ( list1 -> size ) == 1);
	ASSERT_TRUE((list1->head)-> data == 20);

	ASSERT_TRUE(insert_first(list1, 30) == 1);
	ASSERT_TRUE( ( list1 -> size ) == 2);

	// Check that the nodes have the correct order 	
	NodePtr tempPtr = (list1->head)-> next ;
	ASSERT_TRUE((list1->head)-> data == 30);
	ASSERT_TRUE(tempPtr-> data == 20);
}

TEST(LinkedListTest,InsertingFirstNode_nullList){

	ASSERT_TRUE(insert_first(nullptr, 20) == -1);

}

TEST(LinkedListTest,InsertingFirstNode_emptyList){
	ListPtr list2;
	list2 = create_list();	
	
	ASSERT_TRUE(insert_first(list2, 20) == 1);
	ASSERT_TRUE(list2->head == list2->tail);
}

TEST(LinkedListTest,InsertingLastNode_validInputs){
	ListPtr list2;
	list2 = create_list();	
	insert_first(list2,100);
	insert_first(list2,100);
	insert_first(list2,100);
	insert_first(list2,100);

	ASSERT_TRUE(insert_last(list2,-10));
	ASSERT_TRUE( ( list2->tail )-> data == -10);
}

TEST(LinkedListTest,InsertingLastNode_List){

	ASSERT_TRUE(insert_last(nullptr, 20) == -1);

}

TEST(LinkedListTest,InsertingLastNode_emptyList){
	ListPtr list2;
	list2 = create_list();	

	ASSERT_TRUE(insert_last(list2,-10));
	ASSERT_TRUE( ( list2->tail )-> data == -10);
	ASSERT_TRUE( ( list2->tail ) == ( list2->head ));
}

//TEST(LinkedListTest,GettingNode_validInput){
	//ListPtr list4;
	//list4 = create_list();	
	//insert_first(list4,10);
	//insert_first(list4,20);
	//insert_first(list4,30);
	
	//ASSERT_TRUE( ( get_node(list4,0) ) -> data == 30);
	//ASSERT_TRUE( ( get_node(list4,1) ) -> data == 20);
	//ASSERT_TRUE( ( get_node(list4,2) ) -> data == 10);
//}

/*TEST(LinkedListTest,DeletingNodes){*/
	/*List *list2;*/
	/*ASSERT_EQ(add_node(1,list2),true);*/
	/*ASSERT_EQ(add_node(2,list2), true);*/
	/*ASSERT_EQ(remove_node(2,list2), true);*/
	/*ASSERT_EQ(remove_node(1,list2),true);*/
	/*//ASSERT_EQ(remove_node(10,NULL),false);*/
/*//	ASSERT_EQ(length_list(list2),0);*/
