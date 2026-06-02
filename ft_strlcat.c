/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:27:20 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/02 19:27:31 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len >= dsize)
		return (dsize + src_len);
	i = dst_len;
	while (src[j] != '\0' && i + 1 < dsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;
// 	char	d[10];

// 	d[0] = 'a';
// 	d[1] = 'b';

// 	s = "cde";
// 	ft_strlcat(d, s, 10);
// 	printf("%s", d);
// 	return (0);
// }
