/*
 * This is the file in which you'll write a function to reverse a linked list.
 * Make sure to add your name and @oregonstate.edu email address below:
 *
 * Name: Aalok Borkar
 * Email: borkaraa@oregonstate.edu
 */

#include <stdio.h>

#include "list_reverse.h"

/*
 * In this function, you will be passed the head of a singly-linked list, and
 * you should reverse the linked list and return the new head.  The reversal
 * must be done in place, and you may not allocate any new memory in this
 * function.
 *
 * Params:
 *   head - the head of a singly-linked list to be reversed
 *
 * Return:
 *   Should return the new head of the reversed list.  If head is NULL, this
 *   function should return NULL.
 */
struct link* list_reverse(struct link* head) {	
	if(head == NULL){
		return NULL;
	}//if LL contains nodes
	struct link *prev = NULL;
	struct link *current = head;
	struct link *ahead = NULL;

	while(current != NULL){
		ahead = current->next;
		current->next = prev;
		prev = current;
		current = ahead;
	}
	return prev;
}
