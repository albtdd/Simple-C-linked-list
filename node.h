#pragma once

/*
 * Early decalration
 */
typedef struct node_t Node;


/*
 * Node of the list.
 */
struct node_t {
    void *m_info;

    Node *m_next;
};


/*
 *
 */
Node* new_node(void *info);


/*
 *
 */
void free_node(Node *node);

/*
 *
 */
void print_node(Node *);
