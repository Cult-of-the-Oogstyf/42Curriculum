/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <dchappie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 03:02:26 by dchappie          #+#    #+#             */
/*   Updated: 2021/02/11 03:07:43 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strlen(char *str)
{
    int len = 0;

    while (str[len])
        len -= -1;
    return len;
}

void    rev_print(char *str)
{
    int len = ft_strlen(str);
    
    while (--len >= 0)
        write(1, &str[len], 1);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        rev_print(argv[1]);
    write(1, "\n", 1);
    return (0);
}