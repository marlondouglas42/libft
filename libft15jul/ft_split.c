// ft_split.c

#include "libft.h"

static size_t count_words(const char *s, char c)
{
  size_t count;
  size_t i;

  count = 0;
  i = 0;
  while (s[i])
  {
    if (s[i] != c && (i == 0 || s[i - 1] == c))
      count++;
    i++;
  }
  return (count);
}

static char *extract_word(const char *s, char c, size_t *pos)
{
  size_t start;
  size_t end;
  char *word;

  while (s[*pos] && s[*pos] == c)
    (*pos)++;
  start = *pos;
  while (s[*pos] && s[*pos] != c)
    (*pos)++;
  end = *pos;
  word = ft_substr(s, start, end - start);
  return (word);
}

char **ft_split(const char *s, char c)
{
  size_t words_count;
  char **result;
  size_t i;
  size_t j;

  if (!s)
    return (NULL);
  words_count = count_words(s, c);
  result = (char **)malloc(sizeof(char *) * (words_count + 1));
  if (!result)
    return (NULL);
  i = 0;
  j = 0;
  while (i < words_count)
  {
    result[i] = extract_word(s, c, &j);
    i++;
  }
  result[i] = NULL;
  return (result);
}
