/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaspar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:39:52 by tgaspar-          #+#    #+#             */
/*   Updated: 2021/07/06 17:15:07 by tgaspar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_numbers(void)

{
	char	a;

	a = 48;
	while (a <= 57)
	{
		ft_putchar(a);
		a++;
	}
}
