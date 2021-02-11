/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:28:48 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 07:38:20 by dodoTheHack      ###   ########.fr       */
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
    {
        if (str[index] == ' ' || str[index] == '\t')
            continue;
        ft_putchar(str[index]);
    }
}


/*
 * Function:  first_word
 * --------------------
 *  takes a string and displays its first word
 * 
 * 
 *  !! Keep in mind !! -->  A word is a section of string delimited by spaces/tabs or by
 *       the start/end of the string.
 * 
 *  returns: void,  first_word takes a string and displays its first word followed by a newline 
 *  apon successfully finding a word in the string.  If no words are found in then only a newline is displayed.
 * 
 * 
 *  !! Another important tip !! -->  trailing spaces do not count as a word so we can not consider that as a word in a string.   
 *    
 *           
*/

void    first_word(int argc, char **argv)
{
    if (argc < 2)
    {
        ft_putchar('\n');
        return ;
    }
    ft_putstr(argv[1]);
    ft_putchar('\n');
}

int     main(int argc, char **argv)
{   
    first_word(argc, argv);
    return (0);
}