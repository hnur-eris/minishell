/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_heredoc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:45 by ncoskun           #+#    #+#             */
/*   Updated: 2023/02/17 15:40:46 by ncoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	contain_heredoc(t_process *process)
{
	int	i;

	i = 0;
	while (process->redirects[i])
	{
		if (is_operator(process->redirects[i]) == HERE_DOC)
			return (TRUE);
		i++;
	}
	return (FALSE);
}
