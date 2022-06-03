/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 03:32:26 by roferrei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/26 05:34:16 by roferrei         ###   ########.fr       */
=======
/*   Updated: 2022/05/26 03:32:30 by roferrei         ###   ########.fr       */
>>>>>>> 8722c27c3d838aebe1f19cb1a5b30de2a2cb2617
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		ft_putchar(c);
		c++;
	}
}
