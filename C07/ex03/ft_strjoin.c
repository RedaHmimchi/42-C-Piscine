/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:33:01 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/07/31 16:45:38 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_seplen(char *sep)
{
	int	count_sep;

	count_sep = 0;
	while (*sep != '\0')
	{
		count_sep++;
		sep++;
	}
	return (count_sep);
}

int	ft_strlen(char	**strs, int size, char *sep)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
		j = 0;
	}
	count += (ft_seplen(sep) * (size - 1));
	return (count);
}

void	ft_strcat(int size, char **strs, char *p, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	x;

	i = 0;
	j = 0;
	k = 0;
	x = 0;
	while (j < size)
	{
		while (strs[j][k] != '\0')
			p[i++] = strs[j][k++];
		if (j != size - 1)
		{
			while (sep[x] != '\0')
				p[i++] = sep[x++];
		}
		x = 0;
		k = 0;
		j++;
	}
	p[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		len;

	if (size == 0)
	{
		p = (char *) malloc(1 * sizeof(char));
		*p = '\0';
		return (p);
	}
	len = (ft_strlen(strs, size, sep) + 1);
	p = (char *) malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strcat(size, strs, p, sep);
	return (p);
}

int main(void)
{
	char *strs[] = {"Hello", "world", "Deeznuts","dontdoit"};
	char *sep = "+++";
	int size = 4;

	printf("%s",ft_strjoin(size, strs, sep));
	return 0;
}