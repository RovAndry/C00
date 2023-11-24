#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i = 0;
	int count = 0;
	int fl = 0;
	if( *(str + i ) == '\0')
	{
		return 1;
	}
	else
	{
		while(*(str + i) != '\0')
		{
			if (*(str + i) >= 'A' && *(str+i)<='Z')
			{
				*(str + i ) = *(str + i ) + 32;
			}
			else 
			{
				*(str + i ) = *(str + i);
			}


			if(*(str + i) >= 'a' && *(str + i) <= 'z')
			{
				count = count + 1;
			}
			else 
			{ 
				fl = 1;
			}
			i++;
		}

		if (fl == 1)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}

}

void main ()
{
	char s []= "iAAAAAA";
	int i;
	i = ft_str_is_alpha(s);
	printf("%d", i);
}
