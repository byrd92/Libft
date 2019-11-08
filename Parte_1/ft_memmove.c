/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:55:49 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/08 14:57:41 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len-- > 0)
		((char *)dst)[len] = ((char *)src)[len];
	return (dst);
}
