/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:59:48 by abataill          #+#    #+#             */
/*   Updated: 2022/11/09 19:02:53 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **tab, int i)
{
	while (--i >= 0)
		free(tab[i]);
	free(tab);
}

static char	*cpytab(char *tab, char *s, char c)
{
	int	i;
	int	size;

	size = 0;
	while (s[0] == c && s[0])
		s++;
	while (s[0] != c && s[0])
	{
		size++;
		s++;
	}
	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	s -= size;
	i = -1;
	while (++i < size)
		tab[i] = s[i];
	tab[i] = '\0';
	return (tab);
}

static int	sizetab(char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			n++;
		while (s[i] != c && s[i])
			i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**tab;
	int		i;
	char	*str;

	str = (char *)s;
	size = sizetab(str, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (str[0] == c && str[0])
			str++;
		tab[i] = cpytab(tab[i], str, c);
		if (!tab[i])
		{
			ft_free(tab, i);
			return (NULL);
		}
		str += ft_strlen(tab[i]);
	}
	tab[size] = 0;
	return (tab);
}
