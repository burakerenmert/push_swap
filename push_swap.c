/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:22:47 by burakerenme       #+#    #+#             */
/*   Updated: 2025/02/27 21:04:18 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	print_index(stack *head)
{
	printf("index : ");
	while (head != NULL)
	{
		printf("%d -> ", head->index);
		head = head->next;
	}
	printf("NULL\n");
}
void	print_stack_a(stack *head)
{
	printf("stack a : ");
	while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
	printf("NULL\n");
}
void	print_stack_b(stack *head)
{
	printf("stack b : ");
	while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
	printf("NULL\n");
}
void	push_a(stack **head, int num)
{
	stack *new_node;

	new_node = malloc(sizeof(stack) * 1);
	if(!new_node)
		return;
	new_node->data = num;
	new_node->next = *head;
	*head = new_node;
}
int	stack_fill(char *str, stack **head)
{
	int num;
	char **str_split;
	int i;

	i = 0;
	str_split = ft_split(str, ' ');
	while (str_split[i])
	{
		num = ft_atoi(str_split[i]);
		check_duplicate(num);
		if (num == 0)
		{
			printf("Error\n");
			exit (1);
		}
		push_a(head, num);
		i++;
	}
	return (1);
}
int main(int ac, char **av)
{
	if((ac == 1) || (ac > 1 && av[1][0] == '\0'))
		exit(1);
	int i;
	int f;
	stack *head_a = NULL;
	stack *head_b = NULL;

	i = 1;
	while (i < ac)
	{
		f = stack_fill(av[i], &head_a);
		i++;
		if(f == 0)
			return(0);
	}
	print_stack_a(head_a);
	get_array(&head_a);
	print_index(head_a);
	radix_sort(&head_a, &head_b);
	print_stack_a(head_a);
	print_stack_b(head_b);
	return (0);
}
