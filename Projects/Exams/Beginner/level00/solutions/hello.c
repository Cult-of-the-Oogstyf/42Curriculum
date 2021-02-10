/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:26:19 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/10 21:27:41 by dodoTheHack      ###   ########.fr       */
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

int main(void)
{
    ft_putstr("Hello World!");
    ft_putchar('\n');
    return (0);
}