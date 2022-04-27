/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:57:21 by dantremb          #+#    #+#             */
/*   Updated: 2022/04/10 23:53:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* écrit dans un file descriptor recu dans "fd" un caractère recu dans "c"	  */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
