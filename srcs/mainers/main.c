/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:42:47 by rnarciso          #+#    #+#             */
/*   Updated: 2023/03/13 17:25:34 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"
#include "../../headers/utils.h"

//to create the separator of "1 2 3" of 1 2 3

static void	the_separator(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;

	a = start_stack(ac, av);
}

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		the_separator(ac, av);
	}
	return (0);
}
