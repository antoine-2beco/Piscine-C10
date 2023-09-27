/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:19:44 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/27 22:12:43 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*int ft_test(int x)
{
	return(x + 2);
}*/

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int	*out;
	int	i;

	out = malloc(sizeof(int) * lenght);
	if (!out)
		return (NULL);
	i = 0;
	while(i < lenght)
	{
		out[i] = (*f)(tab[i]);
		i++;
	}
	return (out);
}

/*int main(void)
{
	int	tab[] = {2147364746, 45, 78 , 8484, 4984849};
	ft_map(tab, 5, &ft_test);
}*/