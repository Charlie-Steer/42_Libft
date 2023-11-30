int ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(-1));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('8'));
	return (0);
}
