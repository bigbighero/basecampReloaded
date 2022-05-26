/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:04:18 by roferrei          #+#    #+#             */
/*   Updated: 2022/05/26 04:31:27 by roferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;
	int	i;

	i = 1;
	total = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		total = i * total;
		i++;
	}
	return (total);
}
