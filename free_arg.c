/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:34:50 by olabrecq          #+#    #+#             */
/*   Updated: 2021/11/22 08:43:28 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_arg(char **arg)
{
	int	i;

	i = 0;
	if (arg)
	{
		while (arg[i])
			free(arg[i++]);
		free(arg);
	}
}
