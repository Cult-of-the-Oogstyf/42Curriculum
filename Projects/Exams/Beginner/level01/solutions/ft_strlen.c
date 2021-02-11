/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 07:45:02 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 07:48:50 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
 * Function:  ft_strlen
 * --------------------
 * 
 *  returns: string_index, the length of the string as an integer
 *    
 *           
*/

int ft_strlen(char *str)
{
    int string_index;

    string_index = 0;
    while (str[string_index])
        string_index++;
        
    return string_index;
}


