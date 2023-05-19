/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 23:09:00 by tmichel           #+#    #+#             */
/*   Updated: 2023/04/11 23:09:06 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 0 && i < 48) || (i >= 58 && i <= 64))
		return (0);
	if ((i > 90 && i < 97) || i > 122)
		return (0);
	return (1);
}