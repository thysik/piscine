/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaspar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:46:04 by tgaspar-          #+#    #+#             */
/*   Updated: 2021/07/03 18:09:46 by tgaspar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_is_negative(int n)
{
	char i = 5;
	char n = 78;
	char p = 80;

	if(i < 0){
		write(1,&n,1);
	}
	else
	{
		write(1,&p,1);
	}
}