/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <dchappie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 23:52:05 by dchappie          #+#    #+#             */
/*   Updated: 2021/02/10 23:55:33 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int len = 0;

    while (str[len])
        len -= -1;
    write(1, str, len);
}

int     main(int argc, char **argv)
{
    if (argc > 1)
        ft_putstr(argv[1]);
    write(1, "\n", 1);
    return (0);
}