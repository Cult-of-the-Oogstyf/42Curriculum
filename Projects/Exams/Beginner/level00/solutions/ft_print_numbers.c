/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:16:39 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 07:27:44 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


/*
**  Very important!,  pay attention to how the question only asks for 
**  the function now and no longer a PROGRAM that calls the function
**  Therefore we will NOT submit a main function 
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
 * Function:  ft_print_numbers 
 * --------------------
 * displays all digits in decending order
 * 
 *  returns: void,  ft_print_numbers prints displays all digits in accending order followed by a newline
 *          
 *           
*/

void	ft_print_numbers(void)
{
    int start_position;

    start_position = 0;
    while (start_position <= 9)
    {
        ft_putnbr(start_position);
        start_position++;
    }
    ft_putchar('\n');
}


/*
**  Only here for testing,  Do not submit a main in the exams when they 
**  only ask for the function. Moulinette is not going to forgive your mistake.
*/


int main(void)
{
    ft_print_numbers();
    return (0);
}
