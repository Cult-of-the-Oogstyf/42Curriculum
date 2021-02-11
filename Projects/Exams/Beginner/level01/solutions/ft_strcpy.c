/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:46:21 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 07:42:34 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>





/*
 * Function:  ft_strcpy
 * --------------------
 *  copies  the string pointed to by src(s2) into destination(s1)
 * 
 *  returns: destination string(s1), the function  copies the string pointed to by src,
 *           including the terminating null byte ('\0'), to the buffer pointed to by dest(s1).  
 *           The strings may not overlap, and the destination string
 *           dest must be large enough to receive the copy. 
 *    
 *           
*/

char    *ft_strcpy(char *s1, char *s2)
{
        while (*s2)
        {
            *s1 = *s2;
            s1++;
            s2++;
        }
        *s1 = '\0';
        return s1;
}


