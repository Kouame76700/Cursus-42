/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:49:08 by tmichel           #+#    #+#             */
/*   Updated: 2023/05/23 19:55:10 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	int		i;
	char	*memory;

	memory = (char *)memoryBlock;
	i = 0;
	while (memory[i] != (char)searchedChar && size != 0 && memory[i])
	{
		size--;
		i++;
	}
	if (memory[i] == (char)searchedChar)
		return (&memory[i]);
	return (NULL);
}
