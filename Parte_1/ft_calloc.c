/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <egarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:27:11 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/08 12:38:57 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if ((ptr = malloc(count * size)) == NULL)
        return (NULL);
    ft_bzero(ptr,count * size);
    return (ptr);
}
/*
int     main (void)
{
    char *ptr;

    ptr = ft_calloc(4, sizeof(char));
    return (0);
}
*/