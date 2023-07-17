// ft_itoa.c

#include "libft.h"

static int get_num_len(int n)
{
  int len;

  len = (n <= 0) ? 1 : 0;
  while (n != 0)
  {
    n /= 10;
    len++;
  }
  return (len);
}

char *ft_itoa(int n)
{
  int len;
  char *str;
  unsigned int num;

  len = get_num_len(n);
  str = (char *)malloc(sizeof(char) * (len + 1));
  if (!str)
    return (NULL);
  str[len] = '\0';
  num = (n < 0) ? -n : n;
  while (len--)
  {
    str[len] = num % 10 + '0';
    num /= 10;
  }
  if (n < 0)
    str[0] = '-';
  return (str);
}
