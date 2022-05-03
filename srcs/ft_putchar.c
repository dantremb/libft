/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:42:20 by root              #+#    #+#             */
/*   Updated: 2022/05/02 12:11:10 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* écrit sur la sortie standard le caractère recu dans "src"				  */

#include "../libft.h"

void	ft_putchar(char src)
{
	write(1, &src, 1);
}
