#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_printf(const char *smth, ...)
{
	const char **mas = &smth;
	int len;
	char *s;

	printf("OK");
//	mas = (char **)malloc(sizeof(char *) * 1000);
	printf("OK");
	len = 0;
	while(*mas)
	{
		len += strlen(*mas);
		mas++;
	}
	s = (char *)malloc(sizeof(char) * (len + 1));
	bzero(s, len + 1);
	mas = &smth;
	while (*mas)
	{
		strcat(s, *mas);
		mas++;
	}
	while (*s)
	{
		printf("%c", *s++);
	}
//	printf("%s", p);
	return (0);
}

int main(int argc, char **argv)
{
	ft_printf(argv[1], argv[2]);
	return (0);
}