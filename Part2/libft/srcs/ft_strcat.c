/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:39:35 by jwilliam          #+#    #+#             */
/*   Updated: 2022/03/25 14:50:19 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		indexa;
	int		indexb;

	indexa = 0;
	indexb = 0;
	while (dest[indexa] != '\0')
	{
		indexa++;
	}
	while (src[indexb] != '\0')
	{
		dest[indexa] = src[indexb];
		indexa++;
		indexb++;
	}
	dest[indexa] = '\0';
	return (dest);
}
