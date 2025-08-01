/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:40:38 by abataill          #+#    #+#             */
/*   Updated: 2022/11/16 23:51:06 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;
	size_t	sizedest;

	if (!dstsize)
		return (ft_strlen(src));
	i = ft_strlen(dest);
	i2 = 0;
	sizedest = i;
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	while (src[i2] && i2 < (dstsize - sizedest - 1))
		dest[i++] = src[i2++];
	dest[i] = '\0';
	return (sizedest + ft_strlen(src));
}
