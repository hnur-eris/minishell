/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:10:17 by ncoskun           #+#    #+#             */
/*   Updated: 2023/02/17 15:10:18 by ncoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	builtin_env(void)
{
	char	**env;

	env = g_ms.env;
	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
	if (!is_parent())
		exit (EXIT_SUCCESS);
}
