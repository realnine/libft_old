/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:10:49 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/11 17:17:33 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int ft_memcmp(const void *pt1, const void *pt2, size_t len)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)pt1;
	p2 = (unsigned char *)pt2;
	while (len--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}