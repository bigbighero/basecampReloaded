/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 03:34:05 by roferrei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/26 05:34:24 by roferrei         ###   ########.fr       */
=======
/*   Updated: 2022/05/26 03:34:18 by roferrei         ###   ########.fr       */
>>>>>>> 8722c27c3d838aebe1f19cb1a5b30de2a2cb2617
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
