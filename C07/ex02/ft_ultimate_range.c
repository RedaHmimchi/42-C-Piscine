/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 02:13:29 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/07/26 02:13:30 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int	*p;
	int	len;

	j = 0;
	len = max - min;
	p = malloc(len * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if ((min == 0 && max == 0) || p == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		p[j] = min;
		min++;
		j++;
	}
	*range = p;
	return (len); 
}
