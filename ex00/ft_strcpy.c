#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{	int i= 0;
	while (*(src+i) != '\0')
	{
		*(dest +i) = *(src + i);
		i++;

	}
		return dest;
}

void main()
{
	char s[]= "anana";
	char d[100];

	ft_strcpy(d, s);
	printf("%s", d);
}


