/*
** array_2d_how_many.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 10:51:06 2016 Arthur Melin
** Last update Wed Nov 30 10:52:35 2016 Arthur Melin
*/

int	array_2d_how_many(int **arr, int nb_rows, int nb_cols, int number)
{
  int	r;
  int	i;
  int	j;

  r = 0;
  i = 0;
  while (i < nb_rows)
    {
      j = 0;
      while (j < nb_cols)
	if (arr[i][j++] == number)
	  r++;
      i++;
    }
  return (r);
}
