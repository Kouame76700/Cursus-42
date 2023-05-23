/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:21:17 by tmichel           #+#    #+#             */
/*   Updated: 2023/05/21 18:21:31 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		e;
	int		i;
	char	*str;

	i = 0;
	e = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = malloc((e + 1) * sizeof(char));
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	e = 0;
	while (s2[e])
	{
		str[i] = s2[e];
		i++;
		e++;
	}
	str[i] = '\0';
	return (str);
}
