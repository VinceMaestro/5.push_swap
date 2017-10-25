/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:56:11 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/25 15:06:52 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	merge_halves(int ar_a, int left_start, int right_end)
{
	int		left_end;
	int		right_start;
	int		len;
	int		left;
	int		right;
	int		j;

	while (left <= left_end && right <= right_end)
	{
		if (ar_a[left] <= ar_a[right])
			temp[j] = ar_a[left++];
		else
			temp[j] = ar_a[right++];
		j++;
	}
	cpfrom_a_i_to_b_j_nelem(ar_a, left, tmp, j, left_end - left + 1);
	cpfrom_a_i_to_b_j_nelem(ar_a, right, tmp, j, right_end - right + 1);
	cpfrom_a_i_to_b_j_nelem(tmp, left_start, ar_a, left_start, len);
}

static void	merge_sort(int **ar_a, int **ar_a, int left_start, int right_end)
{
	int		middle;

	if (left_start >= right_end)
		return ;
	middle = (left_start + right_end) / 2;
	merge_sort(ar_a, left_start, middle);
	merge_sort(ar_a, middle + 1, right_end);
	merge_halves(ar_a, left_start, right_end);
}

static void	ft_main(char **str_ar)
{
	int		**ar_a;
	int		**ar_b;
	int		len;

	if ((len = ft_to_int_ar(str_ar, ar_a)) == -1)
		fr_error("Error\n")

	ar_b = ft_new
	// creer ar_a int**
	// creer ar_b int** of size ar_a.lenght
	merge_sort(ar_a, ar_b 0, len)
}

int     	main(int argc, char **argv)
{
    if (argc >= 2)
		ft_main(argv);
	else
		ft_error("Error\n");
    return (0);
}
