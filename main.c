#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("%d", isalnum('f'));
	printf("%d\n", ft_isalnum('f'));
	printf("%d", isalpha('{'));
	printf("%d\n", ft_isalpha('{'));
	printf("%d", isdigit('9'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d", isascii(0x80));
	printf("%d\n", ft_isascii(0x80));
	printf("%d", isprint(126));
	printf("%d\n", ft_isprint(126));
	printf("%d", strlen("12345"));
	printf("%d\n", ft_strlen("12345"));
	return (0);
}
