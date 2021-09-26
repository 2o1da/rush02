/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jisalee <jisalee@student.42seoul.kr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:33:41 by  jisalee          #+#    #+#             */
/*   Updated: 2021/09/26 21:01:44 by daskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_getfile.h"
#define BUFF_SIZE	1024

char	*character_split(char* filename)
{
	char	buff[BUFF_SIZE];
	int	fd;
	char	*result; 
	long long	i;
	int	num;
	
	fd = open(filename, O_RDONLY);
	if (fd > 0)
	{
		num = read(fd, buff, BUFF_SIZE);
		while ( 0 < num)
		{
			num = read(fd, buff, BUFF_SIZE);
			i += num;
		}
	}
	close(fd);
	fd = open(filename, O_RDONLY);
	result = (char *)malloc(sizeof(char) * i + 1);
	if (fd > 0)
	{
		num = read(fd, buff, BUFF_SIZE);
		ft_strcpy(result,buff);
		while ( 0 < num)
		{
			num = read(fd, buff, BUFF_SIZE);
			ft_strcpy(result,buff);
		}
	}
	return result;
}

void	ft_strcpy(char *str, char*str2)
{
	while (*str =! '\0')
	{
		str++;
	}
	while (*str2 != '\0')
	{
		*str = *str2;
	}
	*str = '\0';
}
