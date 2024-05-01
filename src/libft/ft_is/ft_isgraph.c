/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isgraph.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdraper <mdraper@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/12 22:52:23 by mdraper       #+#    #+#                 */
/*   Updated: 2024/03/12 22:56:42 by mdraper       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isgraph(int c)
{
	return (c != 32 && ft_isprint(c));
}
