/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fds.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:56:56 by jwilliam          #+#    #+#             */
/*   Updated: 2022/03/29 13:34:53 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"./libft/includes/libft.h"
#include	<stdio.h>
#include	<stdlib.h>

static char	*set_company(char **fds, int flag)
{
	char	*company_name;
	char	*temp;
	int		fds_str;

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
		{	
			company_name = ft_strcat(company_name, fds[fds_str]);
			if (fds_str != 2)
				company_name = ft_strcat(company_name, " ");
		}		
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
	while (ft_isprint(name[index]) == 1)
	{
		if ((ft_isalpha(name[index]) == 0) && (name[index] != ' '))
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
	char	*fds[3];
	int		flag;

	fds[0] = "Fancy";
	fds[1] = "Development";
	fds[2] = "Services";
	welcome = "Welcome to ";
	flag = 2;	
	if (flag != 0 && flag != 1)
	{
		printf("%s\n", "Error : Incorrect flags set");
		return (0);
	}
	printf("Please input user name: ");
	scanf("%[^\n]s", input_name);
	check_valid_name(input_name);
	printf("%s - %s\n", ft_strjoin(welcome, set_company(fds, flag)),
		input_name);
	return (0);
}
