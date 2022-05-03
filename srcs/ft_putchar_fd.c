/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:57:21 by dantremb          #+#    #+#             */
/*   Updated: 2022/05/02 12:11:08 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* écrit dans un file descriptor recu dans "fd" un caractère recu dans "c"	  */

#include "../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
