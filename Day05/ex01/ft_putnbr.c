/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 11:26:12 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/14 11:26:15 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int index;
	int tab[10];

	index = 0;
	if (nb < 0)
		ft_putchar('-');
	while (index < 10 && (nb >= 10 || nb <= -10))
	{
		tab[index] = (nb % 10);
		nb = nb / 10;
		index++;
	}
	tab[index] = nb;
	while (index >= 0)
	{
		if (tab[index] < 0)
			ft_putchar((tab[index] * -1) + '0');
		else
			ft_putchar(tab[index] + '0');
		index--;
	}
}
