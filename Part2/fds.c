/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fds.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:56:56 by jwilliam          #+#    #+#             */
/*   Updated: 2022/03/25 15:41:57 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"./libft/includes/libft.h"
#include	<stdio.h>

static char	*set_company(int flag)
{
	char	*fds[3];
	char	*company_name;
	char	*temp;
	int		fds_str;

	fds[0] = "Fancy ";
	fds[1] = "Development ";
	fds[2] = "Services";
	company_name = (char *)malloc(sizeof (char *));
	temp = (char *)malloc(sizeof (char *));
	for (fds_str = 0; fds_str <= 2; fds_str++)
	{
		if (flag == 0)
		{
			temp = ft_substr(fds[fds_str], 0, 1);
			company_name = ft_strcat(company_name, temp);
			free(temp);
		}
		else if (flag == 1)
			company_name = ft_strcat(company_name, fds[fds_str]);
	}
	return (company_name);
}

static void	check_valid_name(char *name)
{
	int		index;

	index = 0;
	if (ft_strlen(name) > 255)
	{
		printf("%s\n", "Error : Input too long.");
		exit(0);
	}
	while (ft_isalpha(name[index]) == 1)
	{
		if ((ft_isalpha(name[index] == 0)) && (name[index] != ' '))
		{
			printf("%s\n", "Error : Only input alphabetical characters.");
			exit(0);
		}
		index++;
	}
	return ;
}

int	main(void)
{
	char	input_name[300];
	char	*welcome;
	int		flag;

	welcome = "Welcome to ";
	flag = 0;
	printf("Please input user name: ");
	scanf("%[^\n]s", input_name);
	check_valid_name(input_name);
	printf("%s - %s\n", ft_strjoin(welcome, set_company(flag)), input_name);
	return (0);
}
