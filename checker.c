#include "push_swap.h"

#include <stdio.h>

ft_main()
{
	// check valid format input
	// make instructions
	// check a ok (ordre croissant) et b vide

}


int     main(int argc, char **argv)
{
    if (argc >= 2)
		ft_main(argv);
	else
		ft_error("Error\n");
    return (0);
}


checker :
prends une liste d instructions & une liste d entiers sur la stdout
creer une deuxieme liste d entiers
execute les instructions sur la liste
verifie si la liste est triée

push_swap :
prends une liste de str,
la transforme en entiers
creer deux listes d entiers
applique un algorithme de tri sur cette liste
	execute les instructions de l algo sur la liste
	enregistre les instructions effectuees sur la liste

2 modes :	M_CHECK
			M_PUSH
// box, inndependante, prends des inputs de checker et push_swap

exec(int instruction, t_arr *arr)
	

box(t_arr *arr, int *instruction(only 4 M_PUSH), int mode(M_CHECK ou M_PUSH))
	if (!((mode & M_CHECK) || (mode & M_PUSH)))
		ft_error("Error : invalid mode\n");
	while (instruction[i])
		exec(instruction[i], arr);
		i++;
	return (mode == M_PUSH ? push(instruction, arr) : verif_order(arr));
