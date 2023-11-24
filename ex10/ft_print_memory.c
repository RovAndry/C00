#include <unistd.h>
#include <stdio.h>
#include <string.h>
void pc(char c)
{
	write(1,&c,1);
}

void hex(long int n ,int zero){
	long int x = n;
	char h[] = "0123456789abcdef";
	int tab [16]={0};
	int reste ;

	for (int i = 15;i >= 0 ; i--){
		if( x > 0 ) {
			tab[i] = x % 16;
			x = x / 16;
		}
	}
	

			for(int i = 0; i < 16; i++)
			{
				if(zero)
				{
				pc(h[tab[i]]);
				}
				else
				{
					if (i > 13 )
					{	
						pc(h[tab[i]]);
					}
			
				}
			}
	
	

	}
	

void *ft_print_memory(void *addr, unsigned int size)
{
	
	long int add = (long int) addr;
	char *cont = addr;
	char ch;
	long int addov;
	int c1,c2;
	int compt = 0; 	
	int seize;	
		
	while(*(cont + compt) != '\0')
	{
		compt = compt + 1;
	
	}

	for (int i = 0; i <= size ; i ++)
	{
		if(i % 16== 0)
		{	
			seize = i + 16;
			add = (long int ) (cont + i);
			hex(add,1);
			pc(':');
			pc(' ');

			if (i <= size - 16)
			{
			for (int j = i; j < seize; j+= 2)
			{
				c1= (int)*(cont + j);
				c2= (int)*(cont + j + 1);
				hex(c1,0);
				hex(c2,0);
				pc(' ');
			}

			for (int k = i ; k < seize ; k++)

			{
				
				ch = *(cont + k);
				if(ch >= ' ' &&  ch <= '~')
				{
					pc(ch);
				}
				else
				{
					pc('.');
				}
			}
			}

			else
			{
				for (int j = i ; j < size ; j+=2)
				{
					c1= (int)*(cont + j);
				        c2= (int)*(cont + j + 1);
					hex(c1,0);
					hex(c2,0);
					pc(' ');
				}
				for (int k = i ; k < size ; k++)
				{

					ch = *(cont + k);
					if(ch >= ' ' && ch <='~')
					{	
						pc(ch);
					}	
					else 
					{
						pc('.');
					}
				}
				

			}

			pc('\n');
		}	
	}
	
		
}
void main()
{
	char h[] = "Bonjoua aja klajlmakjaklajalmr les makjamlaa iiakamakaj  amis";
	long int ad;
	unsigned int longe = strlen(h);
ad = (long int) ad;
ft_print_memory(h,longe);
}

