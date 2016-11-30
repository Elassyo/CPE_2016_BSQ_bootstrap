/*
** fs_get_number_from_first_line.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 10:06:04 2016 Arthur Melin
** Last update Wed Nov 30 10:25:31 2016 Arthur Melin
*/

#include <unistd.h>

int	fs_open_file(char *filepath);
void	fs_understand_return_of_read(int fd, char *buffer, int size);

int	fs_get_number_from_first_line(char *filepath)
{
  int	i;
  int	n;
  int	fd;
  char	buffer[1024];

  if ((fd = fs_open_file(filepath)) == -1)
    return (-1);
  fs_understand_return_of_read(fd, buffer, 1024);
  close(fd);
  i = 0;
  n = 0;
  while ('0' <= buffer[i] && buffer[i] <= '9')
    n = n * 10 + buffer[i++] - '0';
  if (buffer[i] != '\n')
    return (-1);
  return (n);
}
