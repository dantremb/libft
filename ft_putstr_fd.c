/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:57:28 by dantremb          #+#    #+#             */
/*   Updated: 2022/04/10 22:00:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* On recois une chaine de caractère que l'on doit imprimer dans un fichier   */
/* on utilise donc la fonction Write avec le fichier en premier argument. la  */
/* chaine de caractère en deuxieme argument et finalement la longueur de la   */
/* chaine de caractère pour avoir le nombre de caractère a imprimer			  */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
