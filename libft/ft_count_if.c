/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 22:45:00 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/03 17:02:09 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		cpt;
	int		index;

	index = 0;
	cpt = 0;
	while (tab[index] != 0)
	{
		if ((f(tab[index])) == 1)
		{
			cpt += 1;
		}
		index += 1;
	}
	return (cpt);
}
