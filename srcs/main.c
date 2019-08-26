#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_printf.h"

void	prints(va_list *list)
{
		printf("%s\n", va_arg(*list, char *));
}

int	ft_printf(const char *smth, ...)
{
	va_list	list;
	int i;
	int count;
	int j;

	va_start(list, smth);
	count = 0;
	i = 0;
	while (smth[i])
	{
		if (smth[i++] == '%')
		{
			count++;
			i++;
		}
	}
	i = 0;
	j = 0;
	while (smth[i])
	{
		while (smth[i] != '%')
			printf("%c", smth[i++]);
		i++;
		i++;
		printf("%s", va_arg(list, char *));
	}

//	printf("%s\n", smth);
//	prints(&list);
	//listv++;


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
//	printf("%s", p);*/
	va_end(list);
	return (0);
}

int main(int argc, char **argv)
{
	ft_printf("hello %s anyway %s how %s are %s", "world", "lol", "kek", "cheburek");
	return (0);
}
