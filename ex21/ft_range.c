/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:01:19 by roferrei          #+#    #+#             */
/*   Updated: 2022/05/28 23:34:39 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*temp;

	i = 0;
	if (min >= max)
		return (NULL);
	temp = (int *)malloc (sizeof (*temp) * (max - min));
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	return (temp);
}
