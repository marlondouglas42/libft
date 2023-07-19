#include "libft.h"

void ft_putchar_fd(char c, int fd);

void ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

// int main(void)
// {
// 	ft_putstr_fd("Buenos dias, amigo!", 1);
// }
