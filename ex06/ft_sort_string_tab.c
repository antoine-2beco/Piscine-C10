/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:27:24 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/28 16:52:19 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_string_tab(char **tab)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while (tab[i])
	{
		k = 0;
		while (tab[k])
		{
			if (tab[k + 1] && ft_strcmp(tab[k], tab[k + 1]) > 0)
				ft_swap(&tab[k], &tab[k + 1]);
			k++;
		}
		i++;
	}
}
