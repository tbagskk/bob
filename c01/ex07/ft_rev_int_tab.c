/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 23:25:26 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/15 13:25:06 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < (size / 2))
	{
		b = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a -1] = b;
		a++;
	}
}
