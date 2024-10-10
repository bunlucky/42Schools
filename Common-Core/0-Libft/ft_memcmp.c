/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:11:11 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/08 15:11:11 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1 , const void *s2, size_t n)
{
    unsigned char *ptr1 = (unsigned char *)s1;
    unsigned char *ptr2 = (unsigned char *)s2;
    int i;

    i = 0;
    while(i < n)
    {
        if(ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
        i++;
    }
    return(0);
}