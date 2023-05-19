/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:13:30 by tmichel           #+#    #+#             */
/*   Updated: 2023/04/13 06:13:33 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	int		i;
	char	*hd;

	hd = (char *)pointer;
	i = 0;
	while (count > 0)
	{
		hd[i] = value;
		i++;
		count--;
	}
	return (pointer);
}
