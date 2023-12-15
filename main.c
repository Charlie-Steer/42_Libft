#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("returns:	%s\n", ft_itoa(2154));
	printf("returns:	%s\n", ft_itoa(0));
	printf("returns:	%s\n", ft_itoa(7));
	printf("returns:	%s\n", ft_itoa(-1527));
	printf("returns:	%s\n", ft_itoa(-5));
	printf("returns:	%s\n", ft_itoa(-0));
	printf("returns:	%s\n", ft_itoa(-2147483648));
	return (0);
}
