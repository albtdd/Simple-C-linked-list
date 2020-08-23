#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    LList *fruits = ll_new();
    if (fruits) {
        ll_add_node(fruits, new_node("Apple"));
        ll_add_node(fruits, new_node("Banana"));
        ll_add_node(fruits, new_node("Kiwi"));
        ll_add_node(fruits, new_node("Big Orange"));
        ll_print(fruits);
        printf("%llu", ll_free(fruits));
        free(fruits);
    }
    return 0;
}
