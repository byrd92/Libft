/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:55:38 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/08 13:55:54 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char *ptrs;

	ptr = (unsigned char*)dst;
	ptrs = (unsigned char*)src;
	while (n--)
	{
		*(ptr++) = *(ptrs);
		if (*(ptrs++) == c)
			return (ptr);
	}
	return (0);
}
