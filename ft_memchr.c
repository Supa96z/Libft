/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:10:33 by abataill          #+#    #+#             */
/*   Updated: 2022/11/03 19:06:20 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*strbis;

	i = -1;
	strbis = (unsigned char *)str;
	while (++i < n)
		if (strbis[i] == (unsigned char)c)
			return (strbis + i);
	return (0);
}
