#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    LList *fruits = ll_new();
    if (fruits) {
        ll_add(fruits, new_node("Apple"));
        ll_add(fruits, new_node("Banana"));
        ll_add(fruits, new_node("Kiwi"));
        ll_add(fruits, new_node("Orange"));

        printf("\nList:\n");
        ll_print(fruits);
        printf("Size: %llu\n", ll_size(fruits));
        
        printf("Removing element at index 2\n");
        free(ll_remove_at(fruits, 2));
        printf("Removing element at index 0\n");
        free(ll_remove_at(fruits, 0));
        

        printf("\nList:\n");
        ll_print(fruits);
        printf("Size: %llu\n", ll_size(fruits));
        
        printf("\nDeleted %llu node(s).", ll_free(fruits));
        free(fruits);
        printf("\nList deleted.");
    }
    return 0;
}
