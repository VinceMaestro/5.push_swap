#include "push_swap.h"

mergeHalves(int int_arr, int left_start, int right_end)
{
	int		left_end;
	int		right_start;
	int		len;
	int		left;
	int		right;
	int		j;

	while (left <= left_end && right <= right_end)
	{
		if (int_arr[left] <= int_arr[right])
			temp[j] = int_arr[left++];
		else
			temp[j] = int_arr[right++];
		j++;
	}
	cpfrom_a_i_to_b_j_nelem(int_arr, left, tmp, j, left_end - left + 1);
	cpfrom_a_i_to_b_j_nelem(int_arr, right, tmp, j, right_end - right + 1);
	cpfrom_a_i_to_b_j_nelem(tmp, left_start, int_arr, left_start, len);
}

ft_tri(int int_arr, int left_start, int right_end)
{
	int		middle;

	if (left_start >= right_end)
		return ();
	middle = (left_start + right_end) / 2;
	ft_tri(int_arr, left_start, middle);
	ft_tri(int_arr, middle + 1, right_end);
	mergeHalves(int_arr, left_start, right_end);
}

ft_main()
{
	// conv char** to int**
	// creer int_arr
	// Trier(int**, 0, len)
}

int     main(int argc, char **argv)
{
    if (argc >= 2)
		ft_main(argv);
	else
		ft_error("Error\n");
    return (0);
}
