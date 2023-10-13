/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:15:25 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/13 11:35:26 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_check_textures(t_data *d)
{
	int	i;

	i = ft_strlen(d->map_utils->no) - 1;
	while (d->map_utils->no[i] != '.')
		i--;
	if (!string_comp(d->map_utils->no + i, ".xpm"))
	{
		ft_free_game(d);
		finish_error("Error: NO texture isn't .xpm!\n", 2);
	}
	i = ft_strlen(d->map_utils->so) - 1;
	while (d->map_utils->so[i] != '.')
		i--;
	if (!string_comp(d->map_utils->so + i, ".xpm"))
	{
		ft_free_game(d);
		finish_error("Error: SO texture isn't .xpm!\n", 2);
	}
	ft_check_textures2(d);
}

void	ft_check_textures2(t_data *d)
{
	int	i;

	i = ft_strlen(d->map_utils->we) - 1;
	while (d->map_utils->we[i] != '.')
		i--;
	if (!string_comp(d->map_utils->we + i, ".xpm"))
	{
		ft_free_game(d);
		finish_error("Error: WE texture isn't .xpm!\n", 2);
	}
	i = ft_strlen(d->map_utils->ea) - 1;
	while (d->map_utils->ea[i] != '.')
		i--;
	if (!string_comp(d->map_utils->ea + i, ".xpm"))
	{
		ft_free_game(d);
		finish_error("Error: EA texture isn't .xpm!\n", 2);
	}
}
