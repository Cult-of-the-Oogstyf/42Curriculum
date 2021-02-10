/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:53:08 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/10 21:13:01 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**      The legit way to do the question lol
*/
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int number)
{
    if (number < 0)
        number *= -1;
    if (number > 10)
    {
        ft_putnbr(number / 10);
        ft_putnbr(number % 10);
    }
    else
        ft_putchar(number + '0');
}

void ft_countdown(void)
{
    int start_position;

    start_position = 9;
    while (start_position >= 0)
    {
        ft_putnbr(start_position);
        start_position--; 
    }    
    ft_putchar('\n');
}


int main(void)
{
    ft_countdown();
    return (0);
}