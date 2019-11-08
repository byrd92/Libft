/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <egarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:15:13 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/06 15:37:34 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int		ft_start(char const *s1, char const *set)
{
	int i;
	int j;
	int count;
	char boolean;

	boolean = 'T';
	count = 0;
	i = 0;
	while (s1[i] && boolean == 'T')
	{
		j = 0;
		if (boolean == 'T')
		{
			while (set[j])
			{
				if (s1[i] == set[j])
				{
					count++;
					boolean = 'T';
					break;
				}
				boolean = 'F';
				j++;
			}
		}
		i++;
	}
	return (count);
}

static int	 ft_end(char const *s1, char const *set)
{
	int i;
	int j;
	int count;
	char boolean;

	boolean = 'T';
	count = 0;
	i = strlen(s1) - 1;
	while (i > 0)
	{
		j = 0;
		if (boolean == 'T')
		{
			while (set[j])
			{
				if (s1[i] == set[j])
				{
					count++;
					boolean = 'T';
					break;
				}
				boolean = 'F';
				j++;
			}
		}
		i--;
	}
	return (count);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int i;

	i = 0;
	int size;
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	str = (char*)malloc((strlen(s1) - start - end + 1)*sizeof(char));
	size = strlen(s1) - start - end;
	while (size > 0)
	{
		str[i] = s1[start];
		start++;
		size--;
		i++;
	}
	str[i] = '\0';
	return (str);
	
}

int		main(void)
{
	char c[13] = "holaque tal";
	char b[9]  = "hola";
	printf("%i\n",ft_start(c,b));
	printf("%i\n",ft_end(c,b));
	printf("%s\n", ft_strtrim(c,b));
	return (0);
}
