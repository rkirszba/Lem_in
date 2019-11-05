/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccepre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:49:27 by ccepre            #+#    #+#             */
/*   Updated: 2018/11/13 12:46:38 by ccepre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0' && (--n + 1) > 0)
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}
