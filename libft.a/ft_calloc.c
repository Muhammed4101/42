/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muharsla <muharsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:56:33 by muharsla          #+#    #+#             */
/*   Updated: 2024/10/19 11:56:33 by muharsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	k;

	k = count * size;
	if (size && ((k / size) != count))
		return (NULL);
	ptr = malloc(k);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, k);
	return (ptr);
}
