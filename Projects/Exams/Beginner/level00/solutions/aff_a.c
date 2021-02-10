/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 18:00:04 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/10 18:13:24 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void aff_a(int argc, char **argv)
{
    int index;
    
    index = 0;

    if (argc != 2)
    {
        ft_putchar('a');
        ft_putchar('\n');
        return ;
    }

    while(argv[1][index] != '\0')
    {
        if(argv[1][index] == 'a')
        {
            ft_putchar('a');
            break;
        }
	    index++;
    }
    ft_putchar('\n');
    return ;
}

int main(int argc, char **argv)
{
    aff_a(argc, argv);
    return (0);
}
