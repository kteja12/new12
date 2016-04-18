#include <stdlib.h>
 #include <stdio.h>
  #include "linkedlist.h"

   linkedlist_t *create_linkedlist(){
     linkedlist_t * list1 = (linkedlist_t *) malloc(sizeof(linkedlist_t));

      list1->head = NULL;
       list1->tail = NULL;
        return list1;
	 }
int add_node(linkedlist_t *list, node_t *node){

node = (DLLItem*)malloc(sizeof(DLLItem));
if(node != NULL){
node->value = value;
node->next = NULL;
node->prev = NULL;
	}
else 
return ;
if(list->head == NULL && list->tail == NULL){
list->head = node;
list->tail = node;
}

else{
node->prev = list->tail;;

list->tail->next = node;								
list->tail = node;
node->next = NULL;				
}
}
