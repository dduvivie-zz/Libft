#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		diff;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	while (--n && (unsigned char)*str1 == (unsigned char)*str2)
	{
		str1++;
		str2++;
	}
	if ((unsigned char)*str1 > (unsigned char)*str2)
		return (1);
	else if ((unsigned char)*str1 == (unsigned char)*str2)
		return (0);
	else
		return (-1);
}

int	main(void)
{
	printf("%d\n", memcmp("abcde", "abcds", 5));
	printf("%d\n", ft_memcmp("abcde", "abcds", 5));
	return (0);
}
