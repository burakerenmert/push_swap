#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "Libft/libft.h"
#include "stdlib.h"
#include "stdio.h"

typedef struct s_stack
{
    int data;
    int index;
    struct s_stack *next;
}stack;

void    check_duplicate(int num);
int     *alloc_arr(int *arr, int num, int c);
void    swap_functions(stack **head_a, stack **head_b);
void    sa(stack **head);
void    sb(stack **head);
void    ss(stack **head_a, stack **head_b);
void    push_functions(stack **head_a, stack **head_b);
void    pa(stack **head_a, stack **head_b);
void    pb(stack **head_a, stack **head_b);
void	rotate_functions(stack **head_a, stack **head_b);
void    ra(stack **head_a);
void    rb(stack **head_b);
void	rr(stack **head_a, stack **head_b);
void	reverse_rotate_functions(stack **head_a, stack **head_b);
void    rra(stack **head);
void    rrb(stack **head);
void	rrr(stack **head_a, stack **head_b);
void	get_array(stack **head);
void	bubble_sort(int *arr, int size);
void	get_index(stack *head, int *arr, int size);
int find_max_index(stack *a);
int calculate_max_bits(int max);
void radix_sort(stack **a, stack **b);
#endif