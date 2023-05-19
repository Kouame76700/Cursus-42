/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:37:18 by tmichel           #+#    #+#             */
/*   Updated: 2023/04/12 14:37:22 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(char *str, int searchedChar)
{
	int	e;

	e = ft_strlen(str);
	while (str[e - 1])
	{
		if (str[e] == searchedChar)
			return (&str[e]);
		e--;
	}
	return (NULL);
}
