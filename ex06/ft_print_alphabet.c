/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 03:27:16 by roferrei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/26 05:35:01 by roferrei         ###   ########.fr       */
=======
/*   Updated: 2022/05/26 03:30:45 by roferrei         ###   ########.fr       */
>>>>>>> 8722c27c3d838aebe1f19cb1a5b30de2a2cb2617
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c < 123)
	{
		ft_putchar(c);
		c++;
	}
}
