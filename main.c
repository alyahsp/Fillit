/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalmaro <spalmaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:11:31 by spalmaro          #+#    #+#             */
/*   Updated: 2016/11/07 19:13:54 by spalmaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("usage: fillit source_file");
		return (0);
	}
	ft_tetri_check(argv[1]);
}
