/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:06:34 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/07/26 00:03:02 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strcpy(char *p, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (*p);
}

int	ft_strlen(char *src)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	return (j);
}

char	*ft_strdup(char *src)
{
	char	*p;

	p = (char *) malloc((ft_strlen(src) * sizeof(char)) + 1);
	*p = ft_strcpy(p, src);
	if (p == NULL)
		return (NULL);
	return (p);
}
/*#include <stdio.h>
int main()
{
    char array[] = "Reda";
    printf("Array is : %s \n",array);
    printf("Dup Array is : %s ",ft_strdup(array));
}*/
