/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:51:56 by abataill          #+#    #+#             */
/*   Updated: 2022/11/03 19:22:09 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*strbis;

	i = ft_strlen(str);
	strbis = (char *)str;
	if ((char)c == '\0')
		return (strbis + i);
	while (--i >= 0)
		if (strbis[i] == (char)c)
			return (strbis + i);
	return (0);
}
