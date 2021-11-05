#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int	main(void)
{
	char *s = "1234567";

	printf("%c\n", *s);
	s += 2;
	printf("%\n", *s);
	return (0);
}
