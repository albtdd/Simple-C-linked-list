/* 
 * linked_list.h
 *
 * Simple Linked List (ll)
 *
 * Alberto Todde.
 *
 */

#pragma once

#include "node.h"
#include <stdbool.h>


/*
 * Long Long int new name.
 */
typedef unsigned long long t_long;   // Used fot the size of the list.


/*
 * Early declaration.
 */
typedef struct t_llist LList;


/*
 * Make a new  list.
 */
LList* ll_new();


/*
 * Free list
 */
t_long ll_free(LList *list);


/*
 * Check if the list is empty.
 * Returns True of is empty, False otherwise.
 */
bool ll_is_empty(const LList *list);


/*
 * Returns the number(s) of element(s) of the list.
 * If the node is not the head, the resutl will be the size
 * from that node to the end of the list.
 */
t_long ll_size(const LList *list);


/*
 * Adds a node to the bottom of the list.
 * Returns negative code on errors, positive otherwise.
 * -1 head == node: can't add itself.
 * -2 try to insert a null-node.
 *  1 list was empty, first node.
 *  2 list was not empty, node added.
 */
Node* ll_add(LList *list, Node *node);

/*
 * Remove a node in a specific position of the list.
 * Return the node, no memory free.
 */
Node* ll_remove_at(LList *list, t_long index);


/*
 * Show the list
 */
t_long ll_print(LList *list);
