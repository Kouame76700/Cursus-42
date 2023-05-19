/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:28:26 by tmichel           #+#    #+#             */
/*   Updated: 2023/04/17 23:28:28 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	long unsigned int	i;
	char				*str;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size != 0)
		str = (char *)malloc((size * nmemb) * sizeof(char));
	if (!str)
		return (NULL);
	while (i <= (size * nmemb))
	{
		str[i] = 0;
		i++;
	}
	printf("%s", str);
	return (str);
}
