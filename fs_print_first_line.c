/*
** fs_print_first_line.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 09:47:42 2016 Arthur Melin
** Last update Wed Nov 30 10:04:04 2016 Arthur Melin
*/

#include <unistd.h>

int	fs_open_file(char *filepath);
void	fs_understand_return_of_read(int fd, char *buffer, int size);

void	fs_print_first_line(char *filepath)
{
  int	i;
  int	fd;
  char	buffer[1024];

  if ((fd = fs_open_file(filepath)) == -1)
    return ;
  fs_understand_return_of_read(fd, buffer, 1024);
  close(fd);
  i = 0;
  while (buffer[i] != '\n')
    write(STDOUT_FILENO, buffer + i++, 1);
}
