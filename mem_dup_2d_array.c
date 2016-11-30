/*
** mem_dup_2d_array.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 11:02:05 2016 Arthur Melin
** Last update Wed Nov 30 11:06:36 2016 Arthur Melin
*/

#include <stdlib.h>

char	**mem_alloc_2d_array(int nb_rows, int nb_cols);

char	**mem_dup_2d_array(char **arr, int nb_rows, int nb_cols)
{
  int	i;
  int	j;
  char	**p;

  if (!(p = mem_alloc_2d_array(nb_rows, nb_cols)))
    return (NULL);
  i = 0;
  while (i < nb_rows)
    {
      j = 0;
      while (j < nb_cols)
	{
	  p[i][j] = arr[i][j];
	  j++;
	}
      i++;
    }
  return (p);
}
