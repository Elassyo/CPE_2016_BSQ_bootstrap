/*
** fs_open_file.c for CPE_2016_BSQ_bootstrap in /home/arthur.melin/Code/CPE_2016_BSQ_bootstrap
**
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
**
** Started on  Wed Nov 30 09:16:21 2016 Arthur Melin
** Last update Wed Nov 30 09:20:02 2016 Arthur Melin
*/

#include <fcntl.h>
#include <unistd.h>

int	fs_open_file(char *filepath)
{
  int	fd;

  if ((fd = open(filepath, O_RDONLY)) != -1)
    write(STDOUT_FILENO, "SUCCESS\n", 8);
  else
    write(STDOUT_FILENO, "FAILURE\n", 8);
  return (fd);
}
