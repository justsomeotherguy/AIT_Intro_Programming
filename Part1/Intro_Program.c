/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intro_Program.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:30:23 by jwilliam          #+#    #+#             */
/*   Updated: 2022/03/09 13:50:57 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"./libft/includes/libft.h"
#include	<stdio.h>

int	main(void)
{
	char	input_name[255];
	int		index;

	index = 0;
	printf("Please input user name: ");
	scanf("%[^\n]s", input_name);
	while (ft_isprint(input_name[index]) == 1)
	{
		if ((ft_isalpha(input_name[index]) == 0) && (input_name[index] != ' '))
		{
			printf("%s\n", "Error : Only input alphabetical characters.");
			return (0);
		}
		if (ft_strlen(input_name) > 255)
		{
			printf("%s\n", "Error : Input too long.");
			return (0);
		}
		index++;
	}
	printf("%s\n", ft_strjoin("Welcome to FDS - ", input_name));
	return (0);
}
