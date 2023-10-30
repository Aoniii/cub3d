/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:07:19 by snourry           #+#    #+#             */
/*   Updated: 2023/01/27 00:57:37 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"

#define DISTANCE 50

int	mouse(int x, int y, void *var)
{
	t_cube		*cube;

	(void) y;
	cube = (t_cube *)var;
	if (x < WIN_SX / 2 - DISTANCE)
	{
		cube->angle -= M_PI / 50;
		rotate_vectors(cube->vector_tab, -(M_PI / 50));
		mlx_mouse_move(cube->mlx, cube->win, WIN_SX / 2, y);
	}
	else if (x > WIN_SX / 2 + DISTANCE)
	{
		cube->angle += M_PI / 50;
		rotate_vectors(cube->vector_tab, (M_PI / 50));
		mlx_mouse_move(cube->mlx, cube->win, WIN_SX / 2, y);
	}
	return (0);
}
