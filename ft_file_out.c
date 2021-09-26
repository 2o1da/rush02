/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_out.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daskim <daskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 20:44:42 by daskim            #+#    #+#             */
/*   Updated: 2021/09/26 20:48:05 by daskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_file_out(void)
{
	int		i;
	int		j;
	int		fd;
	char	buffer;
	char	*tmp;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	tmp = malloc(sizeof(char) * 1000);
	if (!tmp)
	{
		tmp = NULL;
	}
	i = 0;
	while (read(fd, &buffer, 1))
	{
		if (!(buffer == ' ' || buffer == ':'))
		{
			tmp[i] = buffer;
			i++;
		}
	}
	return (tmp);
}
