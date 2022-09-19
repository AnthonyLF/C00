/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebrun- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:22:03 by alebrun-          #+#    #+#             */
/*   Updated: 2022/09/15 10:22:09 by alebrun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet() 
{ 
	char z = 'z';
	while(z >= 'a')
	{
		write(1, &z, 1);
		z--;
		
	}

}

int main() 
{
	ft_print_alphabet();
	return (0);
}