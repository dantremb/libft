/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:57:23 by dantremb          #+#    #+#             */
/*   Updated: 2022/05/02 12:11:12 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* écrit dans un file descriptor recu dans "fd" un caractère recu dans "c"	  */
/* suivi d'un retour à la ligne 											  */

#include "../libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{	
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
