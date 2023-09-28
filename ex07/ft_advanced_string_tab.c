/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_string_tab.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:00:10 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/28 17:05:33 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while (tab[i])
	{
		k = 0;
		while (tab[k])
		{
			if (tab[k + 1] && (*cmp)(tab[k], tab[k + 1]) > 0)
				ft_swap(&tab[k], &tab[k + 1]);
			k++;
		}
		i++;
	}
}
