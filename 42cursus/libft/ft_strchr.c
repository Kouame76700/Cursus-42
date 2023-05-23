/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:45:19 by tmichel           #+#    #+#             */
/*   Updated: 2023/04/12 10:45:23 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strchr(char *str, int searchedChar)
{
	int	e;

	e = 0;
	while (str[e])
	{
		if (str[e] == (char)searchedChar)
			return (&str[e]);
		e++;
	}
	if ((char)searchedChar == str[e])
		return (&str[e]);
	return (NULL);
}
