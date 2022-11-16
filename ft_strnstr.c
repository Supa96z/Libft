/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:46:00 by abataill          #+#    #+#             */
/*   Updated: 2022/11/16 23:43:32 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (!haystack && !n)
		return (0);
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[++i] && i < n)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < n)
			if (needle[++j] == '\0')
				return ((char *)&haystack[i]);
	}
	return (0);
}
