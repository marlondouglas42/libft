// ft_atoi.c

#include "libft.h"

int ft_isspace(int c)
{
  return (c == ' ' || c == '\t' || c == '\n' ||
          c == '\v' || c == '\f' || c == '\r');
}

int ft_atoi(const char *str)
{
  int result;
  int sign;
  int i;

  result = 0;
  sign = 1;
  i = 0;
  while (ft_isspace(str[i]))
    i++;
  if (str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
      sign = -1;
    i++;
  }
  while (ft_isalpha(str[i]))
  {
    result = result * 10 + (str[i] - '0');
    i++;
  }
  return (result * sign);
}
