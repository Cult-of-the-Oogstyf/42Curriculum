/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <dchappie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 23:32:31 by dchappie          #+#    #+#             */
/*   Updated: 2021/02/10 23:47:26 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    aff_a(char *str)
{
    int index = -1;
    
    while (str[++index])
    {
        if (str[index] == 'a')
        {
            write(1, "a", 1);
            return;
        }
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        aff_a(argv[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "a\n", 2);
    return (0);
}