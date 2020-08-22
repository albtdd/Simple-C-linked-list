#include "linked_list.h"
#include <stdlib.h>         // malloc, ...
#include <string.h>         // strncpy, ...
#include <stdio.h>          // printf, ...




/*
 * Node of the list.
 * Information, in this example, is a struct with only a simple string.
 */
struct t_node {
    t_type m_info;  // Information of the node.

    Node *m_next;   // Next node.
};


/*
 * List access
 */
struct t_llist {
    LList *m_head;
    t_long m_size;
};


void ll_init(LList *list) {
    list->m_head = 0;
    list->m_size = 0;
}


Node* ll_new_node(const t_type info) {
    Node *node = malloc(sizeof(Node));
    if (node) {
        node->m_info = info;
        node->m_next = 0;
        return node;
    }
    return 0;
}

Node* ll_add_node(LList *list, Node *node){
    if (list && node) {
        // First element of the list
        if (list->m_head = 0) {
            list->m_head = node;
            node->m_next = 0;
            list->m_size = 1;
            return node;
        }
        // 
        Node *ptr = list->m_head;
        while (ptr->m_next != 0) {
            ptr = ptr->m_next;
        }
        ptr->m_next = 0;
        list->m_size++;
    }
}
