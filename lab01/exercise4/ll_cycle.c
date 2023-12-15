#include <stddef.h>
#include "ll_cycle.h"

// return 1 if the linkedlist has circle
// return 0 if don't
int ll_has_cycle(node *head) {
    node *fastPtr = head;
    node *lastPtr = head;
    while(fastPtr != NULL && fastPtr->next != NULL){
        fastPtr = fastPtr->next->next;
        lastPtr = lastPtr->next;
        if(fastPtr == lastPtr){
            return 1;
        }
    }
    return 0;
}
