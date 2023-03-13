/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:12:09 by rnarciso          #+#    #+#             */
/*   Updated: 2023/03/13 05:43:02 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"
#include "../../headers/utils.h"

//checks if the str is a nbr and that it is within INT range

int	error_checker(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i++]))
		{
			ft_putstr_fd("Error\n", 2);
			return (-1);
		}
	}
	if (ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
	{
		ft_putstr_fd("Error\n", 2);
		return (-1);
	}
	return (0);
}
