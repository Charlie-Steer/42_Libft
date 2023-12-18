#include <stdio.h>
#include "libft.h"

void addone(unsigned int i, char *c)
{
	(c)++;
}

int main(void)
{
	char s[] = "hello!";
	ft_striteri(s, *addone);
	printf("%s\n", s);
}
