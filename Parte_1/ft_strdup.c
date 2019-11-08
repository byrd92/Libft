/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:32:14 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/08 15:32:37 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *ptr;

	if ((ptr = (char*)malloc(ft_strlen(s) + 1 * sizeof(char))) == NULL)
		return (NULL);
	ptr = ft_memcpy(ptr, s, ft_strlen(s));
	ptr[ft_strlen(s)] = 0;
	return (ptr);
}
