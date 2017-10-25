#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include "get_next_line.h"

# define OP_NONE (1 << 0)
# define OP_SA   (1 << 1)
# define OP_SB   (1 << 2)
# define OP_SS   (1 << 3)
# define OP_PA   (1 << 4)
# define OP_PB   (1 << 5)
# define OP_RA   (1 << 6)
# define OP_RB   (1 << 7)
# define OP_RR   (1 << 8)
# define OP_RRA  (1 << 9)
# define OP_RRB  (1 << 10)
# define OP_RRR  (1 << 11)

# define AR_A	arr->arr_a;
# define AR_B	arr->arr_b;
# define AR_LN	arr->arr_len;
# define AR_OP	arr->op;

typedef struct s_arr	t_arr;

struct s_arr
{
	int		*arr_a;
	int		*arr_b;
	int		arr_len;
	int		*op;
};

#endif
