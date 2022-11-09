/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:42:21 by abataill          #+#    #+#             */
/*   Updated: 2022/11/08 01:00:36 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	cm;

	i = -1;
	cm = 0;
	while (src[cm])
		cm++;
	if (!dstsize)
		return (cm);
	while (src[++i] && i < dstsize - 1)
		dest[i] = src[i];
	dest[i] = '\0';
	return (cm);
}
