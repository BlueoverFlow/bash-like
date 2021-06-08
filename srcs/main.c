/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mezz <ael-mezz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 08:15:00 by ael-mezz          #+#    #+#             */
/*   Updated: 2021/06/08 15:54:12 by ael-mezz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void _init(t_data *data)
{
	data->commands = NULL;
	data->piped = NULL;
	data->fields = NULL;
	data->prototype = NULL;
	data->file = NULL;
	data->branch = NULL;
}

int main()
{
	t_data data;
	t_list *cmd_tmp;

	data.line = NULL;
	data.garbage = NULL;
	while (READ)
	{
		_init(&data);
		if (data_tree(&data) == ERROR)
			continue ;
		print_lines(data);			// just for debug
		/* execution */
		/* code */
	}
	return (0);
}