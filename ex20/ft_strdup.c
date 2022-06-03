/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:23:18 by roferrei          #+#    #+#             */
/*   Updated: 2022/05/28 23:59:58 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*a;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	a = (char *) malloc (sizeof(*a) * len + 1);
	while (i < len)
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
