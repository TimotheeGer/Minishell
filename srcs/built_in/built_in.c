/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built_in.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <tnave@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:44:39 by tnave             #+#    #+#             */
/*   Updated: 2022/01/22 17:16:08 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	built_in_check(char **built_in, t_shell *shell)
{
	if (built_in[0])
	{
		if (!ft_strcmp(built_in[0], "cd"))
			built_in_cd(shell, built_in);
		else if (!ft_strcmp(built_in[0], "pwd"))
			built_in_pwd(shell);
		else if (!ft_strcmp(built_in[0], "env"))
			print_env_lst(shell->environ, 1);
		else if (!ft_strcmp(built_in[0], "unset"))
			built_in_unset(shell, built_in);
		else if (!ft_strcmp(built_in[0], "export"))
			built_in_export(built_in, shell->environ, shell);
		else if (!ft_strcmp(built_in[0], "echo"))
			builtin_echo(built_in, shell);
		else if (!ft_strcmp(built_in[0], "exit"))
			built_in_exit(shell, built_in);
		else
			return (0);
		return (1);
	}
	return (0);
}

int	built_in_check_2(char **built_in, t_shell *shell)
{
	if (built_in[0])
	{
		if (!ft_strcmp(built_in[0], "cd"))
		{
			built_in_cd(shell, built_in);
		}
		else if (!ft_strcmp(built_in[0], "unset"))
			built_in_unset(shell, built_in);
		else if (!ft_strcmp(built_in[0], "export"))
			built_in_export(built_in, shell->environ, shell);
		else if (!ft_strcmp(built_in[0], "exit"))
			built_in_exit(shell, built_in);
		else
			return (0);
		return (1);
	}
	return (0);
}
