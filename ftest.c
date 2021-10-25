#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n && (unsigned char)*str != (unsigned char)c)
	{
		str++;
		n--;
	}
	if (!n)
		return (0);
	return ((void *)str);
}

int	main(void)
{
   const char str[] = "1234.56789";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, 5);

   printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
