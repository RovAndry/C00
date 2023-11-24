#include <unistd.h>
int ft_str_is_printable(char *str)
{	
	char autorise[] = "0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~\\";
	int i = 0;
	int v = 0 ;
	int f = 0;

	if(*str == '\0')
	{
		return 0;
	}
	
	else
	{	
	while ( *(str + i ) != '\0')
	{
		int j = 0;

		while(autorise[j] != '\0')
			{
				if ( *(str + i ) == autorise[j])
				{
					v = v + 1;
				}
				else 
				{	
					f = f + 1;
				}
				j++;
			}
		i++;
	}

	if (f == 0 )
	{	
		return 0;
	}
	else 
	{
		return 1;
	}
	
	}
}

void main()
{
	char s[]= "";
	char a;
	int i = ft_str_is_printable(s);
	a = i +'0';
	write (1,&a,1);
		
}	
