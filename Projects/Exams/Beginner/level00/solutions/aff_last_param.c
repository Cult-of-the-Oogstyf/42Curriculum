/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <dchappie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 00:03:59 by dchappie          #+#    #+#             */
/*   Updated: 2021/02/11 00:06:14 by dchappie         ###   ########.fr       */
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
        ft_putstr(argv[argc - 1]);
    write(1, "\n", 1);
    return (0);
}