/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:12:20 by dantremb          #+#    #+#             */
/*   Updated: 2022/04/10 23:52:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Remplir une zone mémoire pointé par "str" et délimit par "len" avec le     */
/* caractère de la table ASCII correspondant au int "nbr					  */

#include <time.h>

void	*ft_memset(void *str, int nbr, size_t len)
{
	while (len-- > 0)
		((unsigned char *)str)[len] = (unsigned char)nbr;
	return (str);
}
