/*
** array_1d_print_ints.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 10:33:18 2016 Arthur Melin
** Last update Wed Nov 30 10:46:20 2016 Arthur Melin
*/

#include <unistd.h>

static int	pow_ite(int b, int p)
{
  int		r;

  r = 1;
  while (p--)
    r *= b;
  return (r);
}

static void	put_nbr(int n)
{
  int		p;
  char		c;

  p = 9;
  while (n / pow_ite(10, p) == 0 && p)
    p--;
  while (p >= 0)
    {
      c = '0' + (n / pow_ite(10, p--) % 10);
      write(STDOUT_FILENO, &c, 1);
    }
  write(STDOUT_FILENO, "\n", 1);
}

void	array_1d_print_ints(int *arr, int size)
{
  int	nbr;

  while (size--)
    put_nbr(*arr++);
}
