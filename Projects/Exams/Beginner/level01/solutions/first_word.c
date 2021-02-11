/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <dchappie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 02:07:24 by dchappie          #+#    #+#             */
/*   Updated: 2021/02/11 02:19:33 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     is_whitespace(char c)
{
    return c == 32 || c == 9;
}

void    first_word(char *str)
{
    int index = -1;
    
    while (str[++index])
    {
        while (is_whitespace(str[index]) && str[index])
            index -= -1;
        while (!is_whitespace(str[index]) && str[index])
            write(1, &str[index++], 1);
        return;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        first_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}