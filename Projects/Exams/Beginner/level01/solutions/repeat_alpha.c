/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 08:40:25 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 09:19:06 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void  ft_putchar(char c)
{
    write(1, &c, 1);
}


/*
 * Function:  alpha_index
 * --------------------
 *  finds the index of a char in the alphabet
 * 
 *  parameters: c is the character in the alphabet that we are searching for
 * 
 *  returns: characters alphabet index(int),  if char was not found then 0 is returned 
 *    
 *           
*/

int aplha_index(char c)
{
    int alpha_index;
    char low_alpha[27] = "abcdefghijklmnopqrstuvwxyz";   
    char upper_alpha[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 

    alpha_index = 0;
    if (c >= 'a' && c <= 'z')
    {
        while (low_alpha[alpha_index])
        {
            if (low_alpha[alpha_index] == c)
                break;
            alpha_index++;
        }
        return alpha_index;
    }
    
    if (c >= 'A' && c <= 'Z')
    {
        while (upper_alpha[alpha_index])
        {
            if (upper_alpha[alpha_index] == c)
                break;
            alpha_index++;
        }
        return alpha_index;
    }
    return (0);
}


/*
 * Function:  ft_putXchars
 * --------------------
 *  prints a char a number of times based on its alphabet index
 * 
 *  parameters: :c: is the character in the alphabet that we are using
 *  parameters: :number_of_prints: how many times to print the char
 * 
 *  returns: void,  prints out a char X amount of times based on its alphabetical position
 *    
 *           
*/

void ft_putXchars(char c, int number_of_prints)
{
    int index;

    index = 0;
    while (index <= number_of_prints)
    {
        ft_putchar(c);
        index++;
    }
}


void repeat_alpha(int argc, char **argv)
{
    int alpha_index;
    int string_index;
    
    string_index = 0;
    if (argc != 2)
    {
        ft_putchar('\n');
        return ;
    }
    
    while(argv[1][string_index])
    {
        alpha_index = aplha_index(argv[1][string_index]);
        ft_putXchars(argv[1][string_index], alpha_index);
        string_index++;
    }
    ft_putchar('\n');

}

int main(int argc, char **argv)
{
    repeat_alpha(argc, argv);
    return (0);
}