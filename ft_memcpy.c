/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:13:08 by dantremb          #+#    #+#             */
/*   Updated: 2022/04/10 23:43:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copie la zone mémoire pointé par "src" et délimité par "len" vers la zone  */
/* pointé par "dst". si les pointeurs ne sont pas initialisés on retourne NULL*/
/* sinon chaque caractère est copié et un pointer vers "dest" est retourné    */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	while (++i < len)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
