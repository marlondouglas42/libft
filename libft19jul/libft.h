#include <stddef.h>

int ft_isalpha(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);


// #ifndef __SIZE_TYPE__
// #define __SIZE_TYPE__
// #endif
// typedef unsigned int size_t;


size_t ft_strlen(const char *s);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);

void *ft_memset(void *s, int c, size_t n);

void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

char * ft_strnstr(const char *big, const char *little, size_t len);
int ft_atoi(const char *nptr);
void *calloc(size_t nmemb, size_t size);
void *memmove(void *dest, const void *src, size_t n);
char *ft_strdup(const char *s);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
