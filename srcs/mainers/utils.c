/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:35:36 by rnarciso          #+#    #+#             */
/*   Updated: 2023/03/13 18:31:39 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"
#include "../../headers/libft.h"

//inserts a element in stack

void	push(t_stack **top, int value)
{
	t_stack	*new_elem;

	new_elem = malloc(sizeof(new_elem));
	if (new_elem == NULL)
	{
		ft_printf("Error\n");
		exit(1);
	}
	new_elem->nbr = value;
	new_elem->next = *top;
	*top = new_elem;
}

//removes an element from stack

void	pop(t_stack **top)
{
	t_stack	*temp;

	if (*top == NULL)
	{
		ft_printf("The Stack is empty\n");
		exit(1);
	}
	temp = *top;
	*top = (*top)->next;
	free(temp);
}
