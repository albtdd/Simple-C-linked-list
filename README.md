# Simple-C-linked-list

A very simpel linked list written years ago in C


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
 * Returns pointer to the node or 0 on error.
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
