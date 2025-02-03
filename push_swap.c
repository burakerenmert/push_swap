#include "push_swap.h"
#include "stdlib.h"
#include "stdio.h"

void push(stack1 **head, int num)
{
    stack1 *new_node;

    new_node = malloc(sizeof(stack1));
    if(!new_node)
        return;
    new_node->data = num;
    new_node->next = *head;
    *head = new_node;
}
int push_swap(char *str, stack1 **head)
{
    int num;

    num = ft_atoi(str);
    if (num == 0)
    {
        printf("Error\n");
        return (0);
    }
    push(head, num);
    return (1);
}
void print_stack(stack1 *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main(int ac, char **av)
{
    int i;
    int f;
    stack1 *head = NULL;

    i = 1;
    while (i < ac)
    {
        f = push_swap(av[i], &head);
        i++;
        if(f == 0)
            return(0);
    }
    print_stack(head);
    return (0);
}
