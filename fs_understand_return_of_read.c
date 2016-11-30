/*
** fs_understand_return_of_read.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 09:22:48 2016 Arthur Melin
** Last update Wed Nov 30 09:26:54 2016 Arthur Melin
*/

#include <unistd.h>

void	fs_understand_return_of_read(int fd, char *buffer, int size)
{
  int	ret;

  ret = read(fd, buffer, size);
  if (ret == -1)
    write(STDOUT_FILENO, "read a fail\n", 12);
  else if (ret == 0)
    write(STDOUT_FILENO, "read has nothing more to read\n", 30);
  else if (ret < size)
    write(STDOUT_FILENO, "read didn't complete the entire buffer\n", 39);
  else if (ret == size)
    write(STDOUT_FILENO, "read completed the entire buffer\n", 33);
}
