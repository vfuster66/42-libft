/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:52:50 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/08 08:04:36 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* booleen indiquant si le caractere passe en argument est un chiffre
 * renvoie 1 si vrai, 0 si faux
 *
 * */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
