// ft_putendl_fd.c

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
  if (s)
  {
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
  }
}