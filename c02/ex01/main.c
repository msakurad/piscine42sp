/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:54:43 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/18 15:08:24 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strncpy(char *dest, char *src, unsigned int n);

// int	main(void)
// {
// 	char	dest[20];
// 	char	*src;

// 	src = "Hellola";
// 	ft_strncpy(dest, src, 7);
// 	printf("%s\n", dest);
// 	ft_strncpy(dest, "", 0);
// 	src = "Bye";
// 	ft_strncpy(dest, src, 1);
// 	printf("%s", dest);
// 	return (0);
// }

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	set_str(char *src, char *dest)
{
	int	pos = 0;

	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
}

void reset_strs(char *a, char *b, char *c, char *d)
{
	set_str("aaaaaaaaaaaaaaaaaaa", a);
	set_str("aaaaaaaaaaaaaaaaaaa", b);
	set_str("bbbbbbbbbbbbbbbbbbb", c);
	set_str("bbbbbbbbbbbbbbbbbbb", d);
}

bool	same_result(char *expected, char *output, int len)
{
	int pos;
	int res;

	res = 1;
	pos = 0;
	while (pos < len)
	{
		char e = expected[pos];
		char o = output[pos];
		if (e != o)
		{
			printf("in pos %d, expected: %d and got: %d\n",
					pos, e, o);
			res = 0;
		}
		pos++;
	}
	if (!res)
		printf("'%s' : '%s' \n", expected, output);
	return res;
}

int	main(void)
{
	char src[20];
	char dest[20];
	char std_src[20];
	char std_dest[20];

	reset_strs(src, std_src, dest, std_dest);
	set_str("abcd", src);
	set_str("abcd", std_src);
	set_str("efgh", dest);
	set_str("efgh", std_dest);
	printf("%d\n", same_result(
				strncpy(std_dest, std_src, 0),
				ft_strncpy(dest, src, 0),
				3));

	reset_strs(src, std_src, dest, std_dest);
	set_str("abcd", src);
	set_str("abcd", std_src);
	set_str("efgh", dest);
	set_str("efgh", std_dest);
	printf("%d\n", same_result(
				strncpy(std_dest, std_src, 2),
				ft_strncpy(dest, src, 2),
				5));

	reset_strs(src, std_src, dest, std_dest);
	set_str("ab", src);
	set_str("ab", std_src);
	set_str("efghijklm", dest);
	set_str("efghijklm", std_dest);
	printf("%d\n", same_result(
				strncpy(std_dest, std_src, 8),
			   	ft_strncpy(dest, src, 8),
			   	8));
}
