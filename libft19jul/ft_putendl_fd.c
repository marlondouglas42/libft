#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd);

void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

int main(void)
{
	ft_putendl_fd("Ola amigo", 1);
}