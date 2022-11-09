/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:04:51 by abataill          #+#    #+#             */
/*   Updated: 2022/11/05 18:19:40 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = -1;
	if (!s1)
		return (NULL);
	s2 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	while (s1[++i])
		s2[i] = s1[i];
	s2[i] = 0;
	return (s2);
}
