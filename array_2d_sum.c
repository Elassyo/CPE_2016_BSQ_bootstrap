/*
** array_2d_sum.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 10:49:04 2016 Arthur Melin
** Last update Wed Nov 30 10:52:54 2016 Arthur Melin
*/

int	array_2d_sum(int **arr, int nb_rows, int nb_cols)
{
  int	i;
  int	j;
  int	s;

  s = 0;
  i = 0;
  while (i < nb_rows)
    {
      j = 0;
      while (j < nb_cols)
	s += arr[i][j++];
      i++;
    }
  return (s);
}
