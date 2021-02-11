/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:46:44 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 07:25:54 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


/*
 * Function:  aff_z 
 * --------------------
 * displays the first 'z' character it encounters in it
 * 
 *  returns: void,  aff_z prints 'z' followed by a newline on successfully finding 
 *           the char 'z' in a given string. If 'z' does not exist in the given string 
 *           only a newline character is printed
 *           
*/

void aff_z(int argc, char **argv)
{
    int index;
    index = 0;

    if (argc != 2)
    {
        ft_putchar('z');
        ft_putchar('\n');
        return ;
    }

    while(argv[1][index] != '\0')
    {
        if(argv[1][index] == 'z')
        {
            ft_putchar('z');
            break;
        }
	    index++;
    }
    ft_putchar('\n');
    return ;
}

int main(int argc, char **argv)
{
    aff_z(argc, argv);
    return (0);
}
