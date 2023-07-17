/*
  The strchr() function returns a pointer to the first occurrence of the character c in the string s.

  @return The  strchr()  and  strrchr()  functions return a pointer to the matched character or NULL if the character is not found.
    The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.
*/
#include <stddef.h>

char *strchr(const char *s, int c)
{
  while (*s)
  {
    if (*s == c)
    {
      return (char *)s;
    }
    s++;
  }
  if (*s == c)
  {
    return (char *)s;
  }
  return (NULL);
}
