/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataill <abataill@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:57:35 by abataill          #+#    #+#             */
/*   Updated: 2022/11/09 19:01:52 by abataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*swap(char *s)
{
	int		i;
	int		j;
	char	sus;

	i = -1;
	j = ft_strlen(s);
	while (++i < --j)
	{
		sus = s[i];
		s[i] = s[j];
		s[j] = sus;
	}
	return (s);
}

static int	getlen(int nb)
{
	int		size;
	long	n;

	size = 1;
	n = nb;
	if (n < 0 && size++)
		n *= -1;
	while (n > 9 && size++)
		n /= 10;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nb;
	int		i;
	int		minus;

	nb = n;
	i = 0;
	minus = 1;
	s = ft_calloc(1, getlen(nb) + 1);
	if (!s)
		return (NULL);
	if (nb < 0 && minus--)
		nb *= -1;
	while (nb > 9)
	{
		s[i++] = "0123456789"[nb % 10];
		nb /= 10;
	}
	s[i] = "0123456789"[nb];
	if (!minus)
		s[++i] = '-';
	return (swap(s));
}
