/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:53:08 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 07:26:59 by dodoTheHack      ###   ########.fr       */
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


/*
 * Function:  ft_countdown 
 * --------------------
 * displays all digits in decending order
 * 
 *  returns: void,  ft_countdown prints displays all digits in decending order followed by a newline
 *          
 *           
*/

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