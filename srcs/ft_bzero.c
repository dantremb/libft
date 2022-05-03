/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:36:18 by dantremb          #+#    #+#             */
/*   Updated: 2022/05/02 12:08:43 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rempli chaque octect de la zone pointé par "str" par le caractère NULL sur */
/* une longeur recu dans la variable "len". J'appel la fonction memset ou on  */
/* choisi un caractère à placer sur une longueur données.					  */

#include "../libft.h"

void	ft_bzero(void *str, size_t len)
{
	ft_memset(str, '\0', len);
}
