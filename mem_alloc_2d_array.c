/*
** mem_alloc_2d_array.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 10:59:17 2016 Arthur Melin
** Last update Wed Nov 30 11:01:12 2016 Arthur Melin
*/

 #include <stdlib.h>

char	**mem_alloc_2d_array(int nb_rows, int nb_cols)
{
  int	i;
  char	**p;

  if (!(p = malloc(sizeof(char *) * nb_rows)))
    return (NULL);
  i = 0;
  while (i < nb_rows)
    if (!(p[i] = malloc(nb_cols)))
      return (NULL);
  return (p);
}
