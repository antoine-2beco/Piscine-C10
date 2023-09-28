/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:11:05 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/28 16:05:54 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>
# include <stdio.h>

int		main(int argc, char *argv[]);

int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		ft_addition(int a, int b);
int		ft_soustraction(int a, int b);
int		ft_division(int a, int b);
int		ft_multiplication(int a, int b);
int		ft_modulo(int a, int b);

#endif