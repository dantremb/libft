/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:12:20 by dantremb          #+#    #+#             */
/*   Updated: 2022/05/13 13:40:01 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Remplir une zone mémoire pointé par "str" et délimit par "len" avec le     */
/* caractère de la table ASCII correspondant au int "nbr					  */

#include "libft.h"

void	*ft_memset(void *str, int nbr, size_t len)
{
	while (len-- > 0)
		((unsigned char *)str)[len] = (unsigned char)nbr;
	return (str);
}
