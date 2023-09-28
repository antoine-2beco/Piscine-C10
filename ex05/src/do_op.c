/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:09:15 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/28 16:14:16 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_operate(int a, int b, char c)
{
	int			(*operator[5])(int, int);
	long long	res;

	operator[0] = &ft_addition;
	operator[1] = &ft_soustraction;
	operator[2] = &ft_division;
	operator[3] = &ft_multiplication;
	operator[4] = &ft_modulo;


	if (c == '+')
		res = operator[0](a, b);
	else if (c == '-')
		res = operator[1](a, b);
	else if (c == '/')
		res = operator[2](a, b);
	else if (c == '*')
		res = operator[3](a, b);
	else
		res = operator[4](a, b);

	return (res);
}

int	main(int argc, char *argv[])
{
	long long	a;
	long long	b;

	(void) argc;
	printf("--%d--\n", argc);
	if (argc != 4)
		return (0);
	if (!(*argv[2] == '-' || *argv[2] == '+' || *argv[2] == '/'
			|| *argv[2] == '*' || *argv[2] == '%'))
	{
		ft_putstr("0");
		return (0);
	}
	if (*argv[2] == '/' && *argv[3] == '0')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (*argv[2] == '%' && *argv[3] == '0')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0); 
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_putnbr(ft_operate(a, b, *argv[2]));
	return (1);
}
