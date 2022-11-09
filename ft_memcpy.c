/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:08:27 by abataill          #+#    #+#             */
/*   Updated: 2022/11/03 18:50:54 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = -1;
	dest = (char *)dst;
	source = (char *)src;
	if (dst == 0 && src == 0)
		return (dst);
	while (++i < n)
		dest[i] = source[i];
	return (dest);
}
