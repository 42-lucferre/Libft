/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 16:09:59 by lucferre          #+#    #+#             */
/*   Updated: 2026/05/27 17:43:05 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalnum(int c)
{
	return (isalpha(c) || isdigit(c));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = '\n';
// 	printf("%d", isalnum(c));
// 	return (0);
// }
