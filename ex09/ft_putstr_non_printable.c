#include <unistd.h>

void pc(char c)
{
	write (1,&c,1);
}
void hexa(char c)
{	
	int q,r,d;
	int i = 0 ;
	char reste;
	char ind;
	char hx[16] = "0123456789abcdef";
	d = c ;
	q = d / 16;
	r = d % 16;
	ind = hx[r];
	reste = hx[q];

	pc(reste);
	pc(ind);
}

void ft_putstr_non_printable(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ( *(str + i ) < ' '  ||  *(str + i) > '~')
		{
			pc('\\');
			hexa(*(str + i));
		}
		else
		{
			pc(*(str + i));
		}
	i++;
	}
}	



void main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");	
}


		
