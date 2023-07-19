/*
	The strlcat() function appends the NUL-terminated string src to the end of dst.
	It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
	For strlcat() that means the initial length of dst plus the length of src.
*/
#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	const char *ptr_src = src;
	char *ptr_dst = dst;
	size_t	res;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(ptr_src);
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;

	while (*dst)
	{
		dst++;
		size--;
	}
	while (*src && size-- > 1)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (res);
}

// int main(void)
// {
// 	char src[] = "Visual Studio Guide";
// 	char dst[12] = "Gh";

// 	char src2[] = "Visual Studio Guide";
// 	char dst2[12] = "Gh";

// 	printf("%zu %s\n", ft_strlcat(dst, src, 4), dst);
// 	printf("%zu %s\n", ft_strlcat2(dst2, src2, 4), dst2);

// 	return (0);
// }
