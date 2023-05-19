/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:01:45 by tmichel           #+#    #+#             */
/*   Updated: 2023/04/11 15:01:55 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 0 && i < 65) || (i >= 91 && i <= 96))
		return (0);
	if ((i > 122))
		return (0);
	if (i == -1)
		return (0);
	return (1);
}
