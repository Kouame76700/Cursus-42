/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:05:09 by tmichel           #+#    #+#             */
/*   Updated: 2023/05/19 09:05:12 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	e;
	int				i;
	char			*str;

	i = 0;
	e = ft_strlen(s);
	if (!s || len == 0)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	while (start != e)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
