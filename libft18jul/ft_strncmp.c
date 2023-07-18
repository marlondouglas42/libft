#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  while (n--)
  {
    if (!(*s1 == *s2))
    {
      return (*s1 - *s2);
    }
    s1++;
    s2++;
  }
  return (0);
}

// int main()
// {
//   const char *str1 = "Hello";
//   const char *str2 = "Hellx";
//   // int result = ft_strncmp(str1, str2, 5);
//   int result = strncmp(str1, str2, 5);
//   printf("Resultado: %d\n", result);
//   return 0;
// }