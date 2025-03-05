/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghonorat <ghonorat@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:56:17 by ghonorat          #+#    #+#             */
/*   Updated: 2025/03/02 18:57:30 by ghonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	src_i;
	size_t	src_len;
	size_t	dest_len;

	src_i = 0;
	src_len = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	i = dest_len;
	printf("i: %lld\n", i);
	while (src[src_len])
		src_len++;
	printf("src_len: %lld\n", src_len);
	while (src[src_i] && src_i < size - dest_len - 1)
	{
		dest[i] = src[src_i];
		printf("dest[%lld]: %c\n", i, src[src_i]);
		i++;
		src_i++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}
/*
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*src = argv[1];
	char	dest[12] = "abcdef";

	if (argc != 2)
	{
		printf("1 parameters required");
	}
	else
	{
		printf("ft_strlcat result: %i\n", ft_strlcat(dest, src, sizeof(dest)));
		printf("dest: %s\n", dest);
		printf("sizeof(dest): %lld\n", sizeof(dest));
		return (0);
	}
}
*/