/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 07:21:52 by tmichel           #+#    #+#             */
/*   Updated: 2023/04/13 07:21:54 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*hd;

	i = 0;
	hd = (char *)s;
	while (n > 0)
	{
		hd[i] = '\0';
		i++;
		n--;
	}
}
