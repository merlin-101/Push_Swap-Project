/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starting_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:39:48 by rnarciso          #+#    #+#             */
/*   Updated: 2023/03/13 19:31:33 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"
#include "../../headers/utils.h"

//exacts the protocol for 1 big string full of ints

t_stack	*start_split(char **list)
{
	t_stack	*top;
	t_stack	*temp;
	int		i;

	i = 0;
	top = NULL;
	temp = NULL;
	while (list[i] != NULL)
	{
		if (error_checker(list[i]))
			return (NULL);
		i++;
	}
	temp->next = NULL;
	return (top);
}

//creates both stacks, performs a parsing and puts the values on the stack a

t_stack	*start_stack(int ac, char *av[])
{
	t_stack	*temp;
	t_stack	*top;
	int		i;

	i = 0;
	temp = NULL;
	top = NULL;
	if (ac == 2)
		return (start_split(ft_split(av[1], ' ')));
	else
	{
		while (av[++i] != NULL)
		{
			if (error_checker(av[++i]))
				return (NULL);
			i++;
		}
	}
	temp->next = NULL;
	return (top);
}
