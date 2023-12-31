#include "libft.h"

// void ft_putchar_fd(char c, int fd);

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	if (n < 0)
	{
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar_fd('0' + n, fd);
	} else {
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

int main(void)
{
	ft_putnbr_fd(127, 1);
}
