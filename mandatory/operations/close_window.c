/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:34:50 by jomirand          #+#    #+#             */
/*   Updated: 2023/09/18 18:35:49 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_xbutton(t_data *d)
{
	if (d != NULL && d->mlx_ptr != NULL && d->win_ptr != NULL)
	{
		mlx_destroy_window(d->mlx_ptr, d->win_ptr);
		mlx_destroy_display(d->mlx_ptr);
		free(d->mlx_ptr);
	}
	exit(0);
}
