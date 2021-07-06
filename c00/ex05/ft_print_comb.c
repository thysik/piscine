/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaspar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:53:10 by tgaspar-          #+#    #+#             */
/*   Updated: 2021/07/06 17:19:42 by tgaspar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb(void)

{
	char	a;
	char	b;
	char	c;

	a = 48 - 1;
	while (a++ < 55)
	{
		b = a;
		while (b++ < 56)
		{
			c = b;
			while (c++ < 57)
			{
				if (!(a == 48 && b == 49 && c == 50))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
			}
		}
	}
}
