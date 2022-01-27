/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:29:06 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/10/29 15:47:37 by ssulkuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int	min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
		return (0);
	res = (int *)malloc(sizeof(*res) * (max - min));
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
