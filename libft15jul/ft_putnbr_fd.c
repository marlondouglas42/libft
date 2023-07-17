// ft_putnbr_fd.c

#include "libft.h"

static void ft_putnbr_recursive(int n, int fd)
{
  if (n < 0)
  {
    ft_putchar_fd('-', fd);
    if (n == -2147483648)
    {
      ft_putnbr_recursive(-(n / 10), fd);
      ft_putchar_fd('8', fd);
      return;
    }
    n = -n;
  }
  if (n < 10)
  {
    ft_putchar_fd(n + '0', fd);
    return;
  }
  ft_putnbr_recursive(n / 10, fd);
  ft_putchar_fd((n % 10) + '0', fd);
}

void ft_putnbr_fd(int n, int fd)
{
  ft_putnbr_recursive(n, fd);
}
