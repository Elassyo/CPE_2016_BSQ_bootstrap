/*
** fs_cat_x_bytes.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 09:31:23 2016 Arthur Melin
** Last update Wed Nov 30 09:46:01 2016 Arthur Melin
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	fs_open_file(char *filepath);
void	fs_understand_return_of_read(int fd, char *buffer, int size);

void	fs_cat_x_bytes(char *filepath, int x)
{
  int	fd;
  char	*buffer;

  if (!(buffer = malloc(x)))
    return ;
  if ((fd = fs_open_file(filepath)) == -1)
    return ;
  fs_understand_return_of_read(fd, buffer, x);
  close(fd);
  write(STDOUT_FILENO, buffer, x);
  free(buffer);
}
