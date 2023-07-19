#include <stdlib.h>
#include <stdio.h>
char *ft_itoa(int n)
{
	int str_size = 1;
	int n2 = n;
	
	while (n2 /= 10)
		str_size++;

	if (n < 0)
		str_size++;

	char *result = (char *)malloc(str_size + 1);
	char *ptr_result = result;

	if (!result)
	{
		return NULL;
	}

	if (n < 0)
	{
		*result = '-';
		n = -n;
	}

	result += str_size - 1;

	while (str_size--)
	{
		*result-- = '0' + (n % 10);
		n /= 10;
	}

	return ptr_result;
}
  #include <string.h>
 
 /* reverse:  reverse string s in place */
 void reverse(char s[])
 {
     int i, j;
     char c;
 
     for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }
 void itoa(int n, char s[])
 {
     int i, sign;
 
     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
    //  do {       /* generate digits in reverse order */
    //      s[i++] = n % 10 + '0';   /* get next digit */
    //  } while ((n /= 10) > 0);     /* delete it */
	s[i++] = n % 10 + '0'; 
	while ((n /= 10) > 0) {
		s[i++] = n % 10 + '0';
	}
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
 }

int main(void)
{
	printf("N: %s\n\n", ft_itoa(123));
	char buff[16];
	itoa(123, buff);
	printf("N: %s\n", buff);
}
