/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:36:52 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/07/18 16:56:35 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_alpha(char *str, int i)
{
	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_num(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = i - 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		if (ft_is_alpha(str, i) == 1)
		{
			if (ft_is_num(str, x) == 0 && ft_is_alpha(str, x) == 0)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
		x = i - 1;
	}
	return (str);
}
