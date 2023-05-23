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
	int				actual_length;
	char			*str;

	i = 0;
	e = ft_strlen(s);
	actual_length = len;
	if (start + len > e)
		actual_length = e - start;
	str = malloc((actual_length + 1) * sizeof(char));
	if (!s || e == 0 || start >= e)
		return ("");
	while (s[start] && len != 0)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
