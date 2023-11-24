#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		if (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
		}
		else	
		{	
			*(dest + i) = '\0';
		}

	}
	return dest;
}

void main()
{
	char s[]= "anana";
	char d [100];
	int l = 10;

	*ft_strncpy(d,s,l);

	printf("%s", d);
}

