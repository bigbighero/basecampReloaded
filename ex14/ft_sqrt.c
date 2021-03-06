/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:39:14 by roferrei          #+#    #+#             */
/*   Updated: 2022/05/27 02:06:37 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while ((n * n) <= nb && n < 46341)
	{
		if ((n * n) != nb)
		{
			n++;
		}
		else
			return (n);
	}
	return (0);
}
