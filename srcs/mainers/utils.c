/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:35:36 by rnarciso          #+#    #+#             */
/*   Updated: 2023/02/22 01:35:39 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"
#include "../../headers/libft.h"

int	the_guardian(char *str)
{
	if (ft_atoi(str) == -1)
		return (1);
	return (0);
}
