/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:26:38 by yusyamas          #+#    #+#             */
/*   Updated: 2022/11/09 12:28:14 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	print_row(int x, char *str)
{
	int	dx;

	dx = 0;
	while (dx <= x)
	{
		if (dx == 0)
			ft_putchar(str[0]);
		else if (dx == x - 1)
			ft_putchar(str[2]);
		else if (dx == x)
			ft_putchar('\n');
		else
			ft_putchar(str[1]);
		dx++;
	}
}

int	rush(int x, int y)
{
	int	dy;

	if (print_error(x, y))
		return (1);
	dy = 0;
	while (dy < y)
	{
		if (dy == 0)
			print_row(x, "/*\\");
		else if (dy == y - 1)
			print_row(x, "\\*/");
		else
			print_row(x, "* *");
		dy++;
	}
	return (0);
}
