/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:35:29 by nmalope           #+#    #+#             */
/*   Updated: 2020/06/26 11:36:08 by nmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	factorial = 1;
	i = 0;
	while (i++ < nb)
		factorial *= i;
	return (factorial);
}
