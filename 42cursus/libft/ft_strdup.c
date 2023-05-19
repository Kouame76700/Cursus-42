/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:20:34 by tmichel           #+#    #+#             */
/*   Updated: 2023/05/15 14:20:37 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*sprime;

	i = 0;
	while (s[i])
		i++;
	sprime = malloc((i + 1) * sizeof(char *));
	if (!sprime)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sprime[i] = s[i];
		i++;
	}
	return (sprime);
}
