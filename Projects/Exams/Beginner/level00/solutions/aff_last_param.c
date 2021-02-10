/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:34:30 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/10 19:43:38 by dodoTheHack      ###   ########.fr       */
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
    while (str[++index])
        ft_putchar(str[index]);
}

void    aff_last_param(int argc, char **argv)
{
    if (argc < 2)
    {
        ft_putchar('\n');
        return ;
    }
    ft_putstr(argv[argc - 1]);
    ft_putchar('\n');
    
}

int main(int argc, char **argv)
{
    aff_last_param(argc, argv);
    return (0);
}
