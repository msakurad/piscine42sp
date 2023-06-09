/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:14:03 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/08 17:48:20 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	write_array(char a[]);

int	main(void)
{
	ft_print_comb();
	return (0);
}

/*
void	ft_print_comb(void)
{
	char	a[5];

	a[0] = '0';
	a[3] = ',';
	a[4] = ' ';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write_array(a);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}

void	write_array(char a[])
{
	if (a[0] != a[1] && a[0] != a[2] && a[1] != a[2])
	{
		if (a[0] == '7' && a[1] == '8' && a[2] == '9')
			write(1, a, 3);
		else
			write(1, a, 5);
	}	
}
*/