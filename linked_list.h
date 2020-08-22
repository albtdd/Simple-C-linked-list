/* 
 * Simple Linked List (ll)
 *
 * Alberto Todde.
 *
 */

#pragma once

#include <stdbool.h>

/*
 * Definition of the information of the node.
 */
typedef int t_type;


/*
 * Long Long int new name.
 */
typedef long long int t_long;   // Used fot the size of the list.


/*
 * Node structure, early declaration.
 */
typedef struct t_node Node;

typedef struct t_llist LList;


/*
 * Init of the list
 */
void  ll_init(LList *list);


/*
 * Makes a new node.
 * Returns the new node or NULL otherwise.
 */
Node* ll_new_node(const t_type info);


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
long int ll_size(const LList *list);


/*
 * Adds a node to the list.
 * Returns negative code on errors, positive otherwise.
 * -1 head == node: can't add itself.
 * -2 try to insert a null-node.
 *  1 list was empty, first node.
 *  2 list was not empty, node added.
 */
int ll_add_node(LList *list, Node *node);

/*
 * Show the list
 */
int ll_show(Node *list);
