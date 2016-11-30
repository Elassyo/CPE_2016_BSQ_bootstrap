/*
** mem_allocat.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 10:54:29 2016 Arthur Melin
** Last update Wed Nov 30 10:58:46 2016 Arthur Melin
*/

#include <stdlib.h>

static void	my_strcpy(char *d, char *s)
{
  while (*s)
    *d++ = *s++;
  *d = 0;
}

static int	my_strlen(char *str)
{
  int		len;

  len = 0;
  while (str[len])
    len++;
  return (len);
}

char	*mem_allocat(char *a, char *b)
{
  char	*p;

  if (!(p = malloc(my_strlen(a) + my_strlen(b) + 1)))
    return (NULL);
  my_strcpy(p, a);
  my_strcpy(p + my_strlen(a), b);
}
