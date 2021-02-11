/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:44:55 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 07:39:36 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);   
}


/*
 * Function:  ft_putstr
 * --------------------
 *  42's Famous ft_putstr because we can not use printf
 * 
 *  returns: void, Prints out a given string to the stdout 
 *    
 *           
*/

void    ft_putstr(char *str)
{
    int index;

    index = -1;
    while(str[++index])
        ft_putchar(str[index]);
}