/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebrun- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:00:02 by alebrun-          #+#    #+#             */
/*   Updated: 2022/09/15 15:41:25 by alebrun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers()

{
    char i = '0';
    while(i <= '9')
    {
        write(1, &i, 1);
        i++;
    }

}

int main()

{
    ft_print_numbers();

    return  (0);
}