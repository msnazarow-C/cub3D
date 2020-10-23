/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <msnazarow@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 00:18:00 by sgertrud          #+#    #+#             */
/*   Updated: 2020/10/24 00:18:35 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "cub3d.h"
#include "mlx.h"

void	init_msg2(char *err_msg[42])
{
	err_msg[38] = "Missing C field";
	err_msg[39] = "Missing F field";
	err_msg[40] = "Missing S field";
	err_msg[41] = "Missing R field";
	err_msg[42] = "Found key on map definition";
	err_msg[43] = "Map is not closed";
	err_msg[44] = "No player found on map";
	err_msg[45] = "Cannot create a window with a resolution of 0";
	err_msg[46] = "Cannot write BMP file";
	err_msg[47] = "Map is not last";
	err_msg[50] = "MLX error";
}

void	init_msg(char *err_msg[42])
{
	err_msg[0] = "Unknown error";
	err_msg[1] = "Unknown error";
	err_msg[21] = "unexpected end of file";
	err_msg[22] = "Found empty line in map definition";
	err_msg[23] = "Syntax error : Unknown key on map file";
	err_msg[24] = "Syntax error : too few values on map file";
	err_msg[25] = "Syntax error : too many values on map file";
	err_msg[27] = "Duplicate key on map file";
	err_msg[28] = "Syntax error in color value";
	err_msg[29] = "Unexpected color value";
	err_msg[30] = "Syntax error in resolution value";
	err_msg[31] = "Syntax error in map";
	err_msg[32] = "Too many players in map";
	err_msg[33] = "Missing map";
	err_msg[34] = "Missing NO field";
	err_msg[35] = "Missing SO field";
	err_msg[36] = "Missing EA field";
	err_msg[37] = "Missing WE field";
	init_msg2(err_msg);
}

void	handle_errors(int error_code, t_data *data)
{
	char	*err_msg[52];

	init_msg(err_msg);
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(err_msg[error_code], 2);
	ft_putstr_fd("\n", 2);
	exit_program(data);
}
