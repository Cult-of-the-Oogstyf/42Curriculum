/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 18:20:27 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 07:25:43 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);   
}


void    ft_putstr(char *str)
{
    int index;

    index = -1;
    while(str[++index])
        ft_putchar(str[index]);
}


/*
 * Function:  aff_first_param
 * --------------------
 * displays the first argument passed in followed by a newline
 * 
 *  returns: void,  aff_first_param displays the first argument passed in followed by a newline 
 *  apon successfully finding an argument.  If no argument is passed in then only a newline is displayed
 *    
 *    
 *           
*/



void    aff_first_param(int argc, char **argv)
{
    if (argc < 2)
    {
        ft_putchar('\n');
        return ;
    }
    ft_putstr(argv[1]);
    ft_putchar('\n');
}

int     main(int argc, char **argv)
{   
    aff_first_param(argc, argv);
    return (0);
}