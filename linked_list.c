/*
 * linked_list.c
 *
 * Alberto Todde
 *
 */

#include "linked_list.h"
#include <stdlib.h>         // malloc, ...
#include <string.h>         // strncpy, ...
#include <stdio.h>          // printf, ...


/*
 * List access.
 */
struct t_llist {
    Node *m_head;
    t_long m_size;
};


/*
 *
 */
LList* ll_new() {
    LList *ll = malloc(sizeof(LList));
    if (ll) {
        ll->m_head = 0;
        ll->m_size = 0;
        return ll;
    }
    return 0;
}


/*
 *
 */
t_long ll_free(LList *list) {
    t_long counter = 0;
    Node *ptr = list->m_head;
    Node *prev;
    while (ptr) {
        prev = ptr;
        ptr = ptr->m_next;
        /* printf("Deleting: %s\n", (char*)prev->m_info); */
        free(prev);
        ++counter;
    }
    list->m_head = 0;
    list->m_size -= counter;    // If everything goes well, must be zero.
    return counter;
}


/*
 *
 */
bool ll_is_empty(const LList *list) {
    if (list) {
        return list->m_size == 0 ? true : false;
    }
    return true;    // An invalid list is empty.
}


/*
 *
 */
t_long ll_size(const LList *list) {
    if (list) {
        return list->m_size;
    }
    return 0;
}


/*
 *
 */
Node* ll_add(LList *list, Node *node){
    if (list && node) {
        // First element of the list
        if (list->m_head == 0) {
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
        ptr->m_next = node;
        list->m_size++;
        return ptr;
    }
    return 0;
}

/*
 *
 */
Node* ll_remove_at(LList *list, t_long index) {
    if (list && index <= list->m_size) {
        Node *ptr = list->m_head;
        if (index == 0) {
            list->m_head = list->m_head->m_next;
            --list->m_size;
            return ptr;
        }
        t_long pos = 0;
        Node *prev;
        while (ptr && pos < index) {
            ++pos;
            prev = ptr;
            ptr = ptr->m_next;
        }
        prev->m_next = ptr->m_next;
        ptr->m_next = 0;
        --list->m_size;
        return ptr;
    }
    return 0;
}


/*
 *
 */
t_long ll_print(LList *list) {
    if (list == 0) return 0;
    t_long counter = 0;
    Node *ptr = list->m_head;
    while (ptr) {
        print_node(ptr);
        ptr = ptr->m_next;
        ++counter;
    }
    return counter;
}

