/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:44:43 by abataill          #+#    #+#             */
/*   Updated: 2022/11/03 19:08:35 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1bis;
	unsigned char	*s2bis;

	i = 0;
	s1bis = (unsigned char *)s1;
	s2bis = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s1bis[i] == s2bis[i] && (s1bis[i] && s2bis[i]) && i < n - 1)
		i++;
	return (s1bis[i] - s2bis[i]);
}
