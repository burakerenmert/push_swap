#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "Libft/libft.h"
#include "stdlib.h"
#include "stdio.h"

typedef struct stacka
{
    int data;
    struct stacka *next;
}stack1;
typedef struct stackb
{
    int data;
    struct stacka *next;
}stack2;
void    check_duplicate(int num);




#endif