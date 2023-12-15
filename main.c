#include <stdio.h>
#include "libft.h"

char addone(unsigned int i, char c)
{
	return (++c);
}

int main(void)
{
	char *s = "hello!";
	printf("%s\n", ft_strmapi(s, *addone));
}
