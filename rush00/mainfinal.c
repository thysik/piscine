/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 10:58:43 by jmachado          #+#    #+#             */
/*   Updated: 2021/07/03 21:05:15 by tgaspar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

	int posicaoLargura;
	int posicaoAltura;
	int limiteAltura;
	int limiteLargura;
	char widthChar = '-';
	char heightChar = '|';
	char cornerChar = 'o';
	char spaceChar = ' ';

void	ft_putchar(char a){
	
	write(1,&a,1);
}

void linhaLimiteTopBot (int limiteLargura){
		ft_putchar(cornerChar);
		while(posicaoLargura > -1 && posicaoLargura < limiteLargura-2){
			ft_putchar(widthChar);
			posicaoLargura++;
		}
	ft_putchar(cornerChar);
	ft_putchar('\n');
	posicaoLargura = 0;
}

void linhasMiddle (int limiteLargura){
	ft_putchar(heightChar);
	while(posicaoLargura > -1 && posicaoLargura < limiteLargura - 2){
		ft_putchar(' ');
		posicaoLargura++;
	}
	ft_putchar(heightChar);
	ft_putchar('\n');
	posicaoLargura=0;
}


void	rush(int limiteLargura, int limiteAltura){


	while(posicaoAltura < limiteAltura) {
		if(posicaoAltura == 0 || posicaoAltura == limiteAltura-1){
			linhaLimiteTopBot(limiteLargura);
			posicaoAltura++;
		} else if (posicaoAltura >0 || posicaoAltura <limiteAltura-2){
		
			linhasMiddle(limiteLargura);
			posicaoAltura++;
			}
	}
}

int	main(){
	posicaoAltura =0;
	posicaoLargura =0;
	
	rush(4,5);
	return(0);
}




