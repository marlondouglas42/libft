// ft_memcpy.c

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
  unsigned char *dst_ptr;
  const unsigned char *src_ptr;

  dst_ptr = (unsigned char *)dst;
  src_ptr = (const unsigned char *)src;
  while (n--)
    *dst_ptr++ = *src_ptr++;
  return (dst);
}
