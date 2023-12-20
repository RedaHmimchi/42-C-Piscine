/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:56:49 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/07/23 19:33:48 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	po;

	i = power - 1;
	po = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (power > 0)
	{
		while (i > 0)
		{
			nb = nb * po;
			i--;
		}
	}
	else if (power == 0)
		return (1);
	else
		return (0);
	return (nb);
}
