/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:08:56 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/07/26 02:12:40 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*p;
	int	len;

	j = 0;
	len = max - min;
	i = min;
	if (min >= max)
		return (NULL);
	p = (int *) malloc(len * sizeof(int));
	while (i < max)
	{
		p[j] = i;
		i++;
		j++;
	}
	return (p);
}
/*
#include <stdio.h>
int main()
{
	int max = 5;
    int *p = ft_range(0,max);
    int i = 0;
    while (i < max)
    {
		printf("%d , ",p[i]);
        i++;
    }
}*/