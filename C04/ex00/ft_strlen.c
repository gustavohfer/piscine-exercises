/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghonorat <ghonorat@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:37:44 by ghonorat          #+#    #+#             */
/*   Updated: 2025/03/03 18:37:48 by ghonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("parameter required");
	printf("%d", ft_strlen(argv[1]));
	return (0);
}
*/