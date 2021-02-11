/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:12:49 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 07:30:30 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void    ft_putchar(char c)
{
    write(1, &c, 1);   
}

int ft_to_upper(char c)
{
    if (!c)
        return (0);
    return c - 32;
}


int check_even(int number)
{
    if (!number)
        return (0);
    return number % 2 == 0;
}


/*
 * Function:  maff_revalpha 
 * --------------------
 * displays alphabet with odd characters in lowercase and even characters in uppercase
 * 
 *  returns: void,  maff_revalpha displays the alphabet in REVERSE then with odd characters
 *  in lowercase and even characters in uppercase followed by a newline
 *          
 *           
*/

void maff_revalpha(void)
{
    int index;
    int mark[27] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,\
    19, 20, 21, 22, 23, 24, 25, 26};
        
    char str[27] = "zyxwvutsrqponmlkjihgfedcba";

    index = 0;
    while (str[index])
    {
        if (check_even(mark[index]))
        {
            ft_putchar(ft_to_upper(str[index]));
        }
        else
            ft_putchar(str[index]);
        index++;
    }
    ft_putchar('\n');
           
}

int main(void)
{
    maff_revalpha();
    return (0);    
}