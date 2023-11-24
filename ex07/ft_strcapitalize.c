#include <unistd.h>
#include <stdio.h>
	
int is_alphanum(char c)
{
	if((c>='a' && c<='z') || (c >= 'A' && c <='Z') || (c >= '0' && c <='9'))
	{
		return 1;
	}
		return 0;
}

int is_alpha(char d)
{
	if((d>='a' && d<='z') || ( d >= 'A' && d <='Z'))
	{
		return 1;
	}
		return 0;
}

char *ft_strcapitalize(char *str)
{
	int i = 0;
	int j = 1;

	*(str + i) = *(str+i)-32;
	
	while ( *(str + j) != '\0')
	{
		if((is_alpha(*(str +j))) && (!is_alphanum(*(str + j-1))))
		{
			*( str + j ) = *( str + j ) - 32;
		}
		j++;
	}


	return str;
}
void main()
{
	char s [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *v;

	v = ft_strcapitalize(s);
	printf("%s",v);
}
