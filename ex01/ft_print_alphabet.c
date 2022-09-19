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
	char a = 'a';
	while(a <= 'z')
	{
		write(1, &a, 1);
		a++;	
	}

}

int main() 
{
	ft_print_alphabet();
	return (0);
}