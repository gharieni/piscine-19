/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 10:40:58 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 10:40:59 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>

# define BUF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_cat(char *file);
void	ft_puterr(char *file, int no);

#endif
