#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_printf.h"

int	ft_printf(const char *smth, ...)
{
	va_list	listv;

	va_start(listv, smth);
	printf("%s\n", va_arg(listv, char *));
	//listv++;
	printf("%s\n", va_arg(listv, char *));
	printf("%s\n", va_arg(listv, char *));


/*	const char **mas = &smth;
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
*/
	va_end(listv);
	return (0);
}

int main(int argc, char **argv)
{
	ft_printf(argv[1], argv[2]);
	return (0);
}