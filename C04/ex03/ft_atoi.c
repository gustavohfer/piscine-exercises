/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghonorat <ghonorat@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:09:56 by ghonorat          #+#    #+#             */
/*   Updated: 2025/03/05 20:09:59 by ghonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

bool	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (true);
	if (c == '\v' || c == '\f' || c == '\r')
		return (true);
	return (false);
}

int	ft_atoi(char *str)
{
	size_t	i;
	int		sign;
	int		result;
	int		sign_count;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	sign_count = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign_count++;
		i++;
	}
	if (sign_count % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("parameter required");
	else
		printf("%d", ft_atoi(argv[1]));
	return (0);
}
