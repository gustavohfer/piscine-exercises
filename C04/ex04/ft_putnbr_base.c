/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghonorat <ghonorat@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:15:02 by ghonorat          #+#    #+#             */
/*   Updated: 2025/03/06 02:15:37 by ghonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	get_base(char *base)
{
	size_t	base_n;
	size_t	i;
	size_t	j;

	i = 0;
	base_n = 0;
	while (base[i++])
		base_n++;
	if (base_n <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (base_n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_n;

	base_n = get_base(base);
	if (base_n > 1)
	{
		if (nbr / base_n >= 1)
		{
			ft_putnbr_base(nbr / base_n, base);
		}
		write(1, &base[nbr % base_n], 1);
	}
}

#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		ft_putnbr_base(54321, "abcd");
	else
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
