
#include <stdio.h>
#include "stack_array.h"

int main(void)
{
    Stack_t stack;
    stack.top = STACK_EMPTY;

    for(uint32_t i = 0; i < 10; i++)
    {
        int32_t tx_val = i * 10;
        if(false == stack_array_push(&stack, tx_val)) printf("Stack overflow\r\n");
    }

    int32_t rx_val = INT32_MIN; 

    for(uint32_t i = 0; i < 12; i++)
    {
        rx_val = stack_array_pop(&stack);
        if(rx_val != INT32_MIN) printf("Poped value %d form stack!\r\n", rx_val);
        else printf("Stack is empty!\r\n");
    }

    return 0;
}