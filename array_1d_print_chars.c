/*
** array_1d_print_chars.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 10:27:34 2016 Arthur Melin
** Last update Wed Nov 30 10:29:15 2016 Arthur Melin
*/

#include <unistd.h>

void	array_1d_print_chars(char *arr)
{
  char	b[2];

  b[1] = '\n';
  while (*arr)
    {
      b[0] = *arr++;
      write(STDOUT_FILENO, b, 2);
    }
}
