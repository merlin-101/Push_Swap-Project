/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:42:47 by rnarciso          #+#    #+#             */
/*   Updated: 2023/02/21 19:34:34 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"
#include "../../headers/utils.h"

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	while (av[i] && ac != 1)
	{
		if (the_guardian(av[i]) == 1)
		{
			ft_printf("Error\n");
			ft_printf("%s\n", av[i]);
			return (0);
		}
		i++;
	}
	return (0);
}
