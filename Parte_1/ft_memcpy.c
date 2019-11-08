/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:57:29 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/08 15:57:33 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*ptr;
	unsigned char	*ptrs;

	i = 0;
	ptr = (unsigned char*)dst;
	ptrs = (unsigned char*)src;
	while (n-- > 0)
	{
		ptr[i] = ptrs[i];
		i++;
	}
	return (ptr);
}
