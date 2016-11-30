/*
** array_1d_sum.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 10:48:06 2016 Arthur Melin
** Last update Wed Nov 30 10:48:41 2016 Arthur Melin
*/

int	array_1d_sum(int *arr, int size)
{
  int	s;

  s = 0;
  while (size--)
    s += *arr++;
  return (s);
}
