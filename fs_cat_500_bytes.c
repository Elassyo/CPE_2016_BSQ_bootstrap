/*
** fs_cat_500_bytes.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 09:31:23 2016 Arthur Melin
** Last update Wed Nov 30 09:38:33 2016 Arthur Melin
*/

#include <fcntl.h>
#include <unistd.h>

int	fs_open_file(char *filepath);
void	fs_understand_return_of_read(int fd, char *buffer, int size);

void	fs_cat_500_bytes(char *filepath)
{
  int	fd;
  char	buffer[500];

  if ((fd = fs_open_file(filepath)) == -1)
    return ;
  fs_understand_return_of_read(fd, buffer, 500);
  close(fd);
  write(STDOUT_FILENO, buffer, 500);
}
