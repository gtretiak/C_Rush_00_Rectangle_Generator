/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:31:20 by gtretiak          #+#    #+#             */
/*   Updated: 2025/05/31 16:11:08 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	xi;
	int	yi;

	yi = 0;
	while (yi < y)
	{
		xi = 0;
		while (xi < x)
		{
			if (yi == 0 && (xi == 0 || xi == x - 1))
				ft_putchar('A');
			else if ((yi == 0 || yi == y - 1) && (xi != 0 && xi != x - 1))
				ft_putchar('B');
			else if (yi == y - 1 && (xi == 0 || xi == x - 1))
				ft_putchar('C');
			else if ((yi != 0 && yi != y - 1) && (xi == 0 || xi == x - 1))
				ft_putchar('B');
			else if (yi != 0 && yi != y - 1)
				ft_putchar(' ');
			xi++;
		}
		if (x > 0)
			ft_putchar('\n');
		yi++;
	}
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 1)
	{
		write(1, "Error: two int-type arguments are required.\n"
			"Enter num of rows and num of columns.\n", 82);
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	rush(x, y);
	return (0);
}
