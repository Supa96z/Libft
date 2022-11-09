/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:51:31 by abataill          #+#    #+#             */
/*   Updated: 2022/11/03 18:54:15 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	cbis;
	char			*bbis;

	i = 0;
	cbis = (unsigned char)c;
	bbis = (char *)b;
	while (i < len)
		bbis[i++] = cbis;
	return (bbis);
}
