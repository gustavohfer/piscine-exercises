/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghonorat <ghonorat@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:40:00 by ghonorat          #+#    #+#             */
/*   Updated: 2025/03/03 18:40:02 by ghonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("argument required");
	else
		ft_putstr(argv[1]);
	return (0);
}
*/