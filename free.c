/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <ael-bekk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:31:06 by ael-bekk          #+#    #+#             */
/*   Updated: 2022/02/03 12:02:22 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/so_long.h"

void	free_split(char **s)
{
	int	i;

	i = -1;
	while (s && s[++i])
		free(s[i]);
	free(s);
}