/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File_Check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalmaro <spalmaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:19:29 by spalmaro          #+#    #+#             */
/*   Updated: 2016/11/07 19:19:30 by spalmaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_pound_numbercheck(char **str)
{
	int i;
	int j;
	int pound;

	i = 0;
	j = 0;
	pound = 0;
	while (str[i])
	{
		if (str[i][j] == '#')
			pound++;
		if (str[i][j + 1] == '\0')
		{
			if (j % 3 != 0)
				return (0);
				i++;
			if (i % 4 == 0)
			{
				if (pound != 4)
					return (0);
				else
					pound = 0;
			}
			j = -1;
		}
		j++;
	}
	return (1);
}

int		ft_char_check(char *buf)
{
	int i;
	int j;

	i = 0;
	j = 0;
	printf("%s\n", buf);
	while (buf[i])
	{
		if ((buf[i] != '.') && (buf[i] != '\n') && (buf[i] != '#'))
			return (0);
		if ((buf[i] == '\n') && (buf[i - 1] == '\n') && (i % 20 == 0))
		{
			if (j != 4)
				return (0);
			else
				j = 0;
			i++;
		}
		if (buf[i] == '\n')
			j++;
		i++;
	}
	return (1);
}

char	**ft_read_to_tab(int fd)
{
	char **str;
	int ret;
	char buf[546];
	char *s;
	int j;

	ret = read(fd, buf, 546);
	buf[ret] = '\0';
	j = ft_char_check(buf);
	printf("%s%d\n", "char check", j);
	str = ft_strsplit(buf, '\n');
	int x = ft_pound_numbercheck(str);
	printf("%s%d\n", "pound number check :", x);
	close(fd);
	return (str);
}

int		ft_tetri_check(char *str)
{
	return (0);
}
