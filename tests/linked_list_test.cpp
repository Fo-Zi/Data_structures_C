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

	ASSERT_TRUE( ( list1 -> size ) == 0);
	ASSERT_TRUE(insert_first_node(list1, 20) == 1);
	ASSERT_TRUE( ( list1 -> size ) == 1);
	
	ASSERT_TRUE(insert_first_node(list1, 30) == 1);
	ASSERT_TRUE( ( list1 -> size ) == 2);

}

TEST(LinkedListTest,InsertingFirstNode_emptyList){

	ASSERT_TRUE(insert_first_node(nullptr, 20) == -1);

}

/*TEST(LinkedListTest,DeletingNodes){*/
	/*List *list2;*/
	/*ASSERT_EQ(add_node(1,list2),true);*/
	/*ASSERT_EQ(add_node(2,list2), true);*/
	/*ASSERT_EQ(remove_node(2,list2), true);*/
	/*ASSERT_EQ(remove_node(1,list2),true);*/
	/*//ASSERT_EQ(remove_node(10,NULL),false);*/
/*//	ASSERT_EQ(length_list(list2),0);*/
