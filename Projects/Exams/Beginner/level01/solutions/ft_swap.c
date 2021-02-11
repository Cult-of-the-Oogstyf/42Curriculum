/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodoTheHacker <dodendaa@student.wethink    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 07:52:17 by dodoTheHack       #+#    #+#             */
/*   Updated: 2021/02/11 08:02:38 by dodoTheHack      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
 * Function:  ft_swap
 * --------------------
 * 
 *  returns: void, swaps the contents of two integers
 *    
 *           
*/

void	ft_swap(int *a, int *b)
{
    int c;

    
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{

    int a = 4;
    int b = 7;
    ft_swap(&a, &b);
    return (0);
}