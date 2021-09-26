/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daskim <daskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:08:02 by daskim            #+#    #+#             */
/*   Updated: 2021/09/26 20:46:01 by daskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	check_string(int argc, char **argv)
{
	int	i;

	if (argc == 1 || argc > 2 || argv[1][0] == '\0')
		return (-1);
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
			return (-1);
		i++;
	}
	comp_str_dict(i);
	return (i);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (check_string(argc, argv) == -1)
		ft_error();
	print_words(check_string(argc, argv), argv, str);
}
