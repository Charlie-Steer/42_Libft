int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", 'c');
	printf("%d\n", '8');
	printf("%d\n", ' ');
	
	return (0);
}
