#include "node.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * Create a new node.
 */
Node* new_node(void *info) {
    if (info) {
        Node *node = malloc(sizeof(Node));
        if (node) {
            node->m_info = info;
            node->m_next = 0;
            return node;
        }
    }
    return 0;
}


/*
 *
 */
void print_node(Node *node) {
    if (node) {
        fprintf(stdout, ">%s\n",(char*) node->m_info);
    }
}
