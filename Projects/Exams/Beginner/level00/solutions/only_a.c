/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:16:18 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/10 22:17:54 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_putchar('a');
    return (0);
}