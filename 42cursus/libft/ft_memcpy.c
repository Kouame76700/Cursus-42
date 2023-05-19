/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:16:37 by tmichel           #+#    #+#             */
/*   Updated: 2023/04/14 15:16:39 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*hd;
	char	*destination;

	hd = (char *)src;
	destination = (char *)dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (n > 0)
	{
		destination[i] = hd[i];
		i++;
		n--;
	}
	return (dest);
}
