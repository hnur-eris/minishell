/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:09:52 by ncoskun           #+#    #+#             */
/*   Updated: 2023/02/17 15:09:54 by ncoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	builtin_cd(char **input)
{
	char	*home;

	if (input[1] != NULL)
	{
		if (chdir(input[1]) != 0)
			errno = 1;
		write(2, "minishell : No such file or directory\n", 38);
		strerror(errno);
	}
	else
	{
		home = getenv("HOME");
		if (home && *home)
			if (chdir(home))
				perror("minishell ");
	}
	if (!is_parent())
		exit (errno);
}
